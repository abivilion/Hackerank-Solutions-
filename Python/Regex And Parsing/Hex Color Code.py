import re, sys
# print(sys.stdin)
for i in sys.stdin:
    #  print(i)
     for j in re.findall('[\s:](#[a-f0-9]{6}|#[a-f0-9]{3})', i, re.I):
        print(j)
