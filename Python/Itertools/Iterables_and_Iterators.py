# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations
n=int(input())
s=input().split()
h=int(input())
count=0
# print(combinations(s,h))
for i in combinations(s,h):
  if 'a' in i:
    count+=1
print(count/len(list(combinations(s,h))))    
