# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import groupby
f=groupby(input())
for key,group in f:
    # print("KEY ",int(key))
    # print("\nGROUP:",group,"\n\n\n")
    count=len(list(group))
    # print("GROUP:",count,"\n\n\n")
    print((count,int(key)),end=" ")
