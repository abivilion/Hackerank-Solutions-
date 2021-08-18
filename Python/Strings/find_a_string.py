def count_substring(string, sub_string):
    count=0
    beg=0
    while(beg<len(string)):
        x=string.find(sub_string,beg)
        if x!=-1:
          beg=x+1
          count+=1
        else:
            break  
    return count

