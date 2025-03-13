def larger_number(a, b): #in larger_number i put 2 arguments 
    return max(a, b) #the function takes 2 functions and return the max of it

#two examples its only hard coded number 
print(larger_number(10, 5))
print(larger_number(123,121))

#another example that takes 2 arguments from user
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

print(f"The Larger number is {larger_number(num1 , num2)}")