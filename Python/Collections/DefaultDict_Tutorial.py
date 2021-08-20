# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import defaultdict
N,M=map(int,input().split())
D=defaultdict(list)

for i in range(N):
  s=input()
  D[s].append(i+1)
for i in range(M):
  si=input()
  # print(s)
  if si in D:
    
    print(" ".join(map(str,D[si])))  
  else:
   print("-1") 
