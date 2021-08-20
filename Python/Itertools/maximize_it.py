# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import product
k,mo=map(int,input().split())

ele=(list(map(int,input().split()))[1:] for i in range(k)) 

results=list(map(lambda x:sum(i*i for i in x)%mo,product(*ele)) ) 
print(max(results))
  
