def rev_order(): #a function called rev_order
    word=str(input("Enter the word to make it reversed : ")).lower() #user input and .lower() mean the word
    rev_word=word[::-1]# - Start from the end of the string
                        # - Move backward one character at a time
                        # - This effectively reverses the string
    return rev_word #return the rev_word 

#call the function and stored in rev_order
result = rev_order()
print(f"Reversed_word is : {result}")