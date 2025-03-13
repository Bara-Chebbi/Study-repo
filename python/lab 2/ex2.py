def is_palindrome():
    word = input("Enter a word: ")#user input 
    word = word.lower()#convert word to lowercase
    
    if word == word[::-1]: #check if word is palindrome or not 
        print(f"{word} is a palindrome")
    else:
        print(f"{word} is not a palindrome")
    

is_palindrome() #calling the function

