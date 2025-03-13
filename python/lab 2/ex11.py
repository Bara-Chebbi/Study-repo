import string

def pangram(n):
    """
    Function to check if a given string is a pangram.
    A pangram is a sentence that contains every letter of the alphabet at least once.
    
    Example:
    "The quick brown fox jumps over the lazy dog" -> True
    "Hello, world!" -> False
    """
    
    userinput = set(string.ascii_lowercase)  # Set containing all lowercase letters a-z
    n = n.lower()  # Convert input string to lowercase for case insensitivity
    
    while True:
        for letter in userinput:  # Loop through all letters in the alphabet
            if letter not in n:  # If any letter is missing from input, return False
                return False
        return True  # If all letters are present, return True

def is_substring(s1, s2):
    """Function to check if s2 is a substring of s1."""
    return s2 in s1  # Returns True if s2 is found in s1, otherwise False

word = input("Enter your word : ")  # Prompt user for input
print(pangram(word))  # Print whether the input is a pangram or not

# Example usage of is_substring function
string1 = input("Enter the first string: ")
string2 = input("Enter the second string: ")
print(is_substring(string1, string2))  # Prints True if string2 is a substring of string1