import re
s,n=input(),input()
padoda=re.compile(n)
deeko=padoda.search(s)
# print(deeko)
if not deeko:
    print("(-1, -1)")
else:
    while deeko:
        print(f"({deeko.start()}, {deeko.end()-1})")
        deeko=padoda.search(s,deeko.start()+1)        
        
    
