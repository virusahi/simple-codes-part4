x = float(input("What's x ? "))
y = float(input("What's y ? "))
operator = input("Operator (+,-,/,*) :")
if operator == '+':
    print(x+y)
elif operator == '-':
    print(x-y)
elif operator == '/':
    print(x/y)
elif operator == '*':
    print(x*y)
else:
    print("Operator is not supported")
