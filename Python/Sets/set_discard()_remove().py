n = int(input())
s = set(map(int, input().split()))
num= int(input())
for i in range(num):
  oper=input().split()
  if "remove" in oper:
     s.remove(int(oper[1]))
  elif "discard" in oper:
     s.discard(int(oper[1]))
  else:
     s.pop()
print(sum(s))    
