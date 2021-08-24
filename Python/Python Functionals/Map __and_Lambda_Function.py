"""cube = lambda x: pow(x,3)

def fibonacci(n):
    # return a list of fibonacci numbers
    l=[]
    for i in range(n):
        if i<2:
            l.append(i)
        elif i>=2:
            l.append(l[i-1]+l[i-2])
    return l  """         

    
cube = lambda x: pow(x,3)# complete the lambda function 
def fibonacci(n):
     # return a list of fibonacci numbers
     lis = [0,1]
     for i in range(2,n):
         lis.append(lis[i-2] + lis[i-1])
     return lis[0:n]
# fib = lambda y: y if y < 2 else fib(y - 1) + fib(y - 2)
# print (list(map(lambda x: x**3, map(fib, range(int(input())))))    
    
    
    

