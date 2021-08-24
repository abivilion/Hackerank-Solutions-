# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
i= input().strip()
# print(len(i))
m = re.search(r'([a-zA-Z0-9])\1',i)
# print(m)
print(m.group(1) if m else -1)
