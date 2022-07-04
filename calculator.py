import operator

# define operators you wanna use
allowed_operators = {
    "+": operator.add,
    "-": operator.sub,
    "*": operator.mul,
    "/": operator.truediv}

# sample variables
a = 5
b = 7
string_operator = "+"

# sample calculation => a+b
result = allowed_operators[string_operator](a, b)
print(result)
