import sys
import os
from utils import DriverChrome, Scraper


if __name__ == '__main__':
    
    # input 
    filename = sys.argv[0]
    USERNAME = sys.argv[1]
    PASSWORD = sys.argv[2]
    SOURCE_FOLDER = USERNAME + '_sources' # save all crawled sources
    print("File: {} is running ...".format(filename))
    if not os.path.isdir(SOURCE_FOLDER): os.mkdir(SOURCE_FOLDER)

    # initialize tools
    driver = DriverChrome(USERNAME, PASSWORD, SOURCE_FOLDER)
    scraper = Scraper(USERNAME)

    # main process
    solved_problems, unsolved_problems = scraper.get_problems_list()
    print("No. of solved: {} - No. unsolved: {}".format(len(solved_problems), len(unsolved_problems)))
    print("Please Wait ! accessing to {} account...".format(USERNAME))
    driver.login_spoj()
    print("Start crawling !!!")

    existed_problems = os.listdir('./'+SOURCE_FOLDER)
    existed_problems = [problem.split('.')[0] for problem in existed_problems]
    new_problems = list(set(existed_problems)^set(solved_problems))
    print(new_problems)
    driver.crawl(new_problems)
    
    # Announce
    
    print("Successfully Crawled")
    TIMECLOSE = 5
    for i in range(TIMECLOSE):
        print("This will be closed in {}s.".format(TIMECLOSE-i))
        driver.sleep(1)
    print("BYE !")
    driver.quit()
    