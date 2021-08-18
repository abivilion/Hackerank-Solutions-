

# Complete the solve function below.
def solve(s):
     e=''
     work= s.split(" ")
     for i in range(len(work)):
          e =e+ work[i].capitalize()+" "
     return  e
