# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
# print (n)
new=[]
for i in range(n):
  stamp=input()
  new.append(stamp)
  var=set(new)
  # print(var," v")
  jup=var.add(stamp)
print(len(var))  
