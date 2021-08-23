# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
for i in range(int(input())):
  asta=True
  try:
    um=re.compile(input())
  except:
    asta=False
  print(asta)  
    
