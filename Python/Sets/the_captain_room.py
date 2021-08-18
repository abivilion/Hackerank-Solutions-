# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
s=input().split()
# print(s)
des=set()
ses=set()
for i in s:
   if i not in des:
    des.add(i)
    ses.add(i)
   else:
    ses.discard(i)
print(ses.pop())     
  
  
