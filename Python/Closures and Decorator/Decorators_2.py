

def person_lister(f):
    def inner(people):
    
        """for i in sorted(people):
            if i[-1] == "M":
                print("Mr. "+i[0]+i[1])
            elif i[-1] == "F":
                print("Ms. "+i[0]+i[1])"""
        return map(f, sorted(people, key=lambda x: int(x[2])))
    return inner

