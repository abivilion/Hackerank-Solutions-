# Enter your code here. Read input from STDIN. Print output to STDOUT
ulu,mua=int(input()),input().split()
# print(mua)
print(all(int(i)>0 for i in mua) and any(t==t[::-1] for t in mua))
# for t in mua:
#     print(any(t==t[::-1]))
