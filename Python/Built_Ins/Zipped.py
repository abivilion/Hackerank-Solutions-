m,n=input().split()
lib=[]
for _ in range(int(n)):
       lib.append(list(map(float,input().split())))
# print(lib)       #[[89.0, 90.0, 78.0, 93.0, 80.0], [90.0, 91.0, 85.0, 88.0, 86.0], [91.0, 92.0, 83.0, 89.0, 90.5]]

# print(list(zip(lib)))
# print((lib[0]))
# print(sum(lib[0]))
# print(*lib) # [89.0, 90.0, 78.0, 93.0, 80.0] [90.0, 91.0, 85.0, 88.0, 86.0] [91.0, 92.0, 83.0, 89.0, 90.5]
# print(list(*zip(*lib))) #([89.0, 90.0, 78.0, 93.0, 80.0],) ([90.0, 91.0, 85.0, 88.0, 86.0],) ([91.0, 92.0, 83.0, 89.0, 90.5],)



for whisky in zip(*lib):
   print(sum(whisky)/len(whisky))
