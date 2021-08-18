def mutate_string(string, position, character):
    new_op = list(string)
    new_op[position]= character
    string = ''.join(new_op)
    return string

