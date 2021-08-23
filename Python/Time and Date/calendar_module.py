# Enter your code here. Read input from STDIN. Print output to STDOUT
import calendar 
m,d,y=map(int,input().split())
"""m=weekday(YYYY,MM,DD)
if m==0:
  print("MONDAY")
elif m==1:
  print("TUESDAY")  
elif m==2:
  print("WEDNESDAY")
elif m==3:
  print("THURSDAY")
elif m==4:
  print("FRIDAY")
elif m==5:
  print("SATURDAY")
else:
  print("SUNDAY")          
"""
lop=calendar.weekday(y, m, d)
p=calendar.day_name
# print(lop)
print(p[lop].upper())
