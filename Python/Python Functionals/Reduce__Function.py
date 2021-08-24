

def product(fracs):
    # print(fracs)
    t = reduce(lambda x,o:x*o,fracs)# complete this line with a reduce statement
    return t.numerator, t.denominator

