

maxdepth = 0
def depth(elem, level):
    global maxdepth
    # your code goes her
    # print(elem,"  :::")
    # print(level,"  [[[]]]")
    if (level == maxdepth):
        maxdepth += 1
        
    # print(elem)    
    for child in elem:
        # print(child)
        depth(child, level + 1)

