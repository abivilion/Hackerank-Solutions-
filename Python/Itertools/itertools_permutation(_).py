# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import permutations
stri,length=input().split()
output=("".join(i) for i in permutations(stri,int(length)))
print("\n".join(sorted(output)))

