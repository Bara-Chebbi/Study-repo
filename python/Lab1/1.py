#
def factorial(n):
    if n == 0 :
        return 0
    elif n == 1:
        return 1
    else:
        return n * factorial(n-1)
num = int(input("Enter a integer : "))
print("Factorial of ", num, "is", factorial(num))

#testing if it works
print(f"The factorial of this num {num} is {factorial(num)}")
