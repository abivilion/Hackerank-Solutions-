# Enter your code here. Read input from STDIN. Print output to STDOUT
# Enter your code here. Read input from STDIN. Print output to STDOUT 
n =int(input())
eng=set(map(int,input().split()))
n1=int(input())
french=set(map(int,input().split()))
print(len(eng.difference (french)))
