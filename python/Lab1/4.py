#calculator
def calculate():
    operator = input("Enter operator (+ , -, *, /): or press 'q' to exit ")
    num1 = int(input("Enter first number : "))
    #to enter operator to calculate with
    
    num=int(input("enter second number"))
    #to check if the operator is valid
    if operator in ('+', '-', '*', '/','q'):
        if  operator=="+":
            print(num1 + num)
            calculate()
        elif operator=="-":
            print(num1 - num)
            calculate()
        elif operator=="*":
            print(num1 * num)
            calculate()
        elif operator=="/":
            if num != 0:
                print(num1 / num)
            else:
                print("Error! Division by zero is not allowed.")
            calculate()
        elif operator=="q":
            print("Exiting the calculator")
            exit()
    else :
        print("Invalid operator")
calculate()




