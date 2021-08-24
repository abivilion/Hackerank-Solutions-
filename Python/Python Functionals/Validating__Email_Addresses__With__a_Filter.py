def fun(s):
    # return True if s is a valid email, else return False
    try:
        username,domain=s.split("@")
        name,ext=domain.split(".")
    except:
        return False
    username = username.replace("-","").replace("_","")
    if not username.isalnum():
        return False
    elif not name.isalnum():
        return False
    elif len(ext)>3:
        return False
    else:
        return True    
 


