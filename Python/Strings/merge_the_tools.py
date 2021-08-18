def merge_the_tools(string, k):
    # your code goes here
    c,s=0,''
    for i in string:
        if i not in s:
            s=s+i
            
        c+=1
        if c==k:
            print(s)
            c=0
            s=''
            

                
