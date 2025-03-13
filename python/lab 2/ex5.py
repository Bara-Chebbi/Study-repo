def find_Factorial(inp_Num):
    inp_Num = int(input("Enter the number"))
    if inp_Num < 0:
        return "Factorial is not possible for negative numbers"
    # Base case: Factorial of 0 or 1 is 1
    elif inp_Num == 0 or inp_Num == 1:
        return 1
    #Recursive case: n! = n * (n-1)!
    return inp_Num * find_Factorial(inp_Num-1)


num = int(input("Enter a num"))
print(f"{find_Factorial(num)}")
