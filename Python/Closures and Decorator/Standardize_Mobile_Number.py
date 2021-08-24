def wrapper(f):
    def fun(l):
        # complete the function
        # def wrapper(f):
        # def fun(l):
        # print(l)
        # for n in l:
            # print(n)
            f('+91 {} {}'.format(n[-10:-5], n[-5:]) for n in l)
    # return fun
    return fun

