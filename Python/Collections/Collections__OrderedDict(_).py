# from icecream import ic
from collections import OrderedDict
d = OrderedDict()
for i in range(int(input())):
    item, space, price = input().rpartition(' ')
    # print(item,"---item")
    # print(item,"---space")
    # print(quantity,"---quantity")


    d[item] = d.get(item,0) + int(price)
for item, price in d.items():
    print(item, price)
