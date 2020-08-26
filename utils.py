import requests 
from bs4 import BeautifulSoup
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from time import sleep

URLSPOJ = 'https://www.spoj.com/PTIT/users/'

class Scraper: # Using bs4
	
	def __init__(self, username):
		self.username = username
		self.user_url = URLSPOJ + self.username + '/'
		self.soup = None
		self.mode = ['lxml','lxml-xml','html5lib']
	
	def get_problems_list(self):
		response = requests.get(self.user_url)
		content = response.text
		self.soup = BeautifulSoup(markup=content, features='lxml')

		tables = self.soup.findAll(name='table', attrs={'class':'table table-condensed'})
		solved_table = tables[0]
		unsolved_table = tables[1]
		solved_problems = solved_table.findAll(name='td')
		unsolved_problems = unsolved_table.findAll(name='td')
		
		solved_problems = [ problem.string for problem in solved_problems if problem.string]	# remove None value
		unsolved_problems = [ problem.string for problem in unsolved_problems if problem.string]

		return solved_problems, unsolved_problems


URL_PROBLEM = 'https://www.spoj.com/PTIT/status/'
URL_SOURCE = 'https://www.spoj.com/PTIT/files/src/'
class DriverChrome: # Using selenium
		
	def __init__(self, username, password, folder):	
		self.driver = None
		self.username = username
		self.password = password
		self.source_folder = folder 

	def login_spoj(self):
		self.driver = webdriver.Chrome('chromedriver')
		self.driver.get('https://www.spoj.com/login/')
		username = self.driver.find_element_by_id('inputUsername')
		password = self.driver.find_element_by_id('inputPassword')
		sign_in = self.driver.find_elements_by_xpath('/html/body/div[1]/div[3]/div/div/form/div[4]/button')

		username.send_keys(self.username)
		password.send_keys(self.password)
		sign_in[0].click()
		sleep(1)
		
	def crawl(self, problems):
		def classify_file(x):
			if any(ext in x for ext in ['C', 'C++', 'CPP', 'CPP14']): return ".cpp"
			if any(ext in x for ext in ["JAVA"]): return ".java"
			if any(ext in x for ext in ["JAVASCRIPT"]): return ".js"
			if any(ext in x for ext in ["PYTHON3","PYPY","PYTHON"]): return ".py"
			if any(ext in x for ext in ["PAS-FPC"]): return ".pas"
			"""That's all I can define"""
			return ".txt"
		
		index_current_problem = 0
		for problem in problems:
			index_current_problem += 1
			print("problem: {} - handled:{}/{} - processing: {:02.2f}%".format(problem, index_current_problem, len(problems), index_current_problem/len(problems)*100))
			url = URL_PROBLEM + problem + ',' + self.username + '/'
			self.driver.get(url)
			table = self.driver.find_element_by_xpath('/html/body/div[1]/div[2]/div[2]/div/div[1]/form/table[1]/tbody')
			submissions = table.find_elements_by_tag_name('tr')
			
			for submission in submissions:
				if 'accepted' in submission.text: #get the first accepted submission in a list of submissions.
					title = str(submission.text).split(' ')
					# example title: ['25225322', '2020-01-11', '07:09:06', 'Birthdates', 'accepted\nedit', '', 'run', '0.00', '4.7M\nC++\n4.3.2']
					id = title[0]
					url_source = URL_SOURCE + str(id) + '/'
					self.driver.get(url_source)
					page_source = self.driver.page_source
					soup = BeautifulSoup(markup=page_source, features='lxml')
					lines = soup.findAll(name='li')

					filename = problem + classify_file(title[-1])
					filez = open( self.source_folder + '/' + filename, "w")
					for line in lines: # write to file
						filez.write(line.getText()+'\n');
					filez.close()
					break

	
	def sleep(self, timesleep):
		sleep(timesleep)

	def quit(self):
		self.driver.quit()