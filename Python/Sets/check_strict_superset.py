# Enter your code here. Read input from STDIN. Print output to STDOUT
a = set(input().split())
counter , n = 0, int(input())
for i in range (n):
        b = set(input().split())
        if a.issuperset(b) :
                counter += 1
print(counter == n)
# a = set(input().split())
# print(all(a > set(input().split()) for i in range(int(input()))))
