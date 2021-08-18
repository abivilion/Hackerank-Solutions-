lis = []  # main list
n = int(input())  # no number of students
# sub list into main list

for i in range(n):
    sl = []
    name = input()
    sl.append(name)
    marks = float(input())
    sl.append(marks)
    lis.append(sl)



# number list
num_l = []
for x in range(n):
    num_l.append(lis[x][1])
# print(num_l)

# applying min algorithm from here
min_num = min(num_l)
c = num_l.count(min_num)
for p in range(c):
    num_l.remove(min_num)

# second min value name get
min_num = min(num_l)
c = num_l.count(min_num)
name_end = []
for p in range(n):
    if lis[p][1] == min_num:
        name_end.append(lis[p][0])

alpha = sorted(name_end)
mystr= '\n'.join(alpha)
print(mystr)
