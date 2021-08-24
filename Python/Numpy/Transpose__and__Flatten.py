import numpy
mo,lo=map(int,input().split())
arr=numpy.array([input().split() for _ in range(mo)],int)
print(arr.transpose())
print(arr.flatten())
