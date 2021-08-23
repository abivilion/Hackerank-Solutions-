from operator import itemgetter
nikki,mikki=input().split()
rows=[]
for i in range(int(nikki)):
    rows.append(list(map(int,input().split())))
    # print(rows)
chuha=int(input())
for ass in rows:
    chukinder=sorted(rows,key=itemgetter(chuha))
    # print(chukinder)
for luli in chukinder:
    print(*luli)
        
        
