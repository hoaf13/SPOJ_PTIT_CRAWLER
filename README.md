# SPOJ PTIT CRAWLER 
![image](https://img.shields.io/badge/python-3.8-blue) ![image](https://img.shields.io/badge/selenium-3.141.0-blue) ![image](https://img.shields.io/badge/beautifulsoup4-4.9.1-blue) ![image](https://img.shields.io/badge/lxml-4.5.2-blue)

This project can crawl your own accepted problems from [SPOJ/PTIT](https://www.spoj.com/PT). 
![image](https://i.ibb.co/2hkzfgW/log.png)

## Prerequisites
This are some packages and an open source tool you must install.
- pip 
- venv
- chrome driver (existed in project(chrome-driver version 88.) or download the corresponding version of your chrome-browser)
#### - pip
##### on Linux: 
```sh
$ sudo apt-get update
$ sudo apt-get install python-pip
$ sudo pip install --upgrade pip
```

##### On Macos: 
```sh
$ sudo easy_install pip
$ sudo pip install --upgrade pip
```
##### On Window: 
follow this: https://phoenixnap.com/kb/install-pip-windows

#### - venv
##### On macOS and Linux:
```sh
$ python3 -m pip install --user virtualenv
```
##### On Windows:
```sh
$ py -m pip install --user virtualenv
```

## Installation
1. Clone this project: 
`$ git clone https://github.com/hoaf13/SPOJ_PTIT_CRAWLER.git`
2. Open project, create and cctivate your virtual environment
- create virtual env

**On macOS and Linux:**
`$ python3 -m venv myenv`

**On window:**
`py -m venv myenv`
- activate virtual env
`$ source myenv/bin/actiavte`

3. Install requirements
`$ pip install -r requirements.txt`

## USE
`$ python3 main.py <username> <password>`

All the sources has just been saved in `<username>_sources`.
That's all

## Contact:  [![author](https://img.shields.io/badge/Author-hoaf13-brightgreen)](https://github.com/hoaf13)
- github: [hoaf13](https://github.com/hoaf13)
- facebook: [hoaf13.6](https://www.facebook.com/hoaf13.6) 
- email: gam.nhosmiles2000@gmail.com

