import re


def domain_name(url):
    test = re.split("\.|/+", url)
    print(test)
    for test1 in test:
        if test1 != "http:" and test1 != "https:" and test1 != "www":
            print(test1)
            return test1
