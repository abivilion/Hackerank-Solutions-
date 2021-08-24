# Enter your code here. Read input from STDIN. Print output to STDOUT
from html.parser import HTMLParser

# create a subclass and override the handler methods
class MyHTMLParser(HTMLParser):
    def handle_starttag(self, tag, attrs):
        if tag=='comment':
            return None
        print('Start : {0}'.format(tag))
        if attrs:
            for arge in attrs:
                print(f"-> {arge[0]} > {arge[1]}") 
    def handle_endtag(self, tag):
        if tag=='comment':
            return None 
        print('End   : {0}'.format(tag))
    def handle_startendtag(self, tag, attrs):
        if tag=='comment':
            return None
        print('Empty : {0}'.format(tag))
        if attrs: 
            for eed in attrs:
                print(f"-> {eed[0]} > {eed[1]}") 

# instantiate the parser and fed it some HTML
parser = MyHTMLParser()
parser.feed(''.join(([input().strip()   for _ in range(int(input()))])))
