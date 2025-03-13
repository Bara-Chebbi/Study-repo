import string
def pangram(n):
    userinput = set(string.ascii_lowercase) # Set containing all lowercase letters a-z
    n = n.lower() # Convert the input string to lowercase
    while True: #using while true to loop
        for letter in userinput: #loop through all letteers in the alphabet
            if letter not in n: #if any letters are missing it will return false
                return False 
        return True #if all letters are there , return true

word = input("Enter your word : ")
print(pangram(word))
