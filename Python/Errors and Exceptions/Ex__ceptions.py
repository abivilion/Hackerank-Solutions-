# Enter your code here. Read input from STDIN. Print output to STDOUT
for i in range(int(input())):
  
  try:
     ser=list(map(int,input().split()))
     print(ser[0]//ser[1])
  except Exception as e:
    print("Error Code:",e)
    
