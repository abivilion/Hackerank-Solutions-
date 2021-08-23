# Enter your code here. Read input from STDIN. Print output to STDOUT
"""from collections import deque
num=int(input())
d=deque()
for i in range(num):
      choice=input().split()
      if choice[0]=='append':
        d.append(int(choice[1]))
      elif choice[0]== 'pop':
        d.pop()  
      elif choice[0] =='popleft':
        d.popleft()
      elif choice[0]=='appendleft':
        d.appendleft(int(choice[1]))
      else:
        print("Now, Cambra")      
print(*d)
"""
from collections import deque
d = deque()
for i in range(int(input())):
    inp = input().split()
    getattr(d, inp[0])(*inp[1] if len(inp) > 1 else [])
print(*[item for item in d])
