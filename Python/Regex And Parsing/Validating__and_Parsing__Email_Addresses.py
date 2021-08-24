# Enter your code here. Read input from STDIN. Print output to STDOUT
# import email.utils
# for _ in range(int(input())):
#         t=email.utils.parseaddr(input())
#         # print(type(t[1]))
#         # dexter@hotmail.com
#         pattern=r"([@]+[.]+[a-z]{1,3})?"
#         import re
#         ans=str(bool(re.match(pattern, t[1])))
#         if ans:
#             print(t[1])
import re
n = int(input())
for _ in range(n):
    x, y = input().split(' ')
    m = re.match(r'<[A-Za-z](\w|-|\.|_)+@[A-Za-z]+\.[A-Za-z]{1,3}>', y)
    if m:
        print(x,y)
