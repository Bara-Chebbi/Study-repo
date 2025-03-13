def prime_num(n):
    if n < 2:
        return False # if n is less then 2 thats means is not prime number
    for i in range(2 , int(n **0.5) + 1):
        if n & i == 0:
            return False #if n is divisible by i, its not prime then
    return True
    
num = int(input("Enter the number: "))

if prime_num(num):
    print(f"{num}is a prime number")
else:
    print(f"{num}is not a prime number")