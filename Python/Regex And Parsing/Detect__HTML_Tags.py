# Enter your code here. Read input from STDIN. Print output to STDOUT
from html.parser import HTMLParser

class operations(HTMLParser):
    def handle_starttag(self, tag, attrs):
        if tag=="comment":
            return None
        print(tag)
        if attrs:
            for i in attrs:
                print(f"-> {i[0]} > {i[1]}")

                
parser = operations()
parser.feed(''.join(([input().strip()   for _ in range(int(input()))])))
