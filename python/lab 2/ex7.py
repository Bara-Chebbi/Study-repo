def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

# Ask the user for input
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

# Compute and print the GCD
print("GCD:", gcd(num1, num2))
