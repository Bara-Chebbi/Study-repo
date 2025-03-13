def longest_nonrepeating(s):
    ch1 = ""  # Stores the current non-repeating substring
    longest = ""  # Stores the longest non-repeating substring found

    # Using a loop to iterate over each character in the string
    for i in range(len(s)):
        if s[i] in ch1:  # If the character is already in the current substring
            ch1 = ch1[ch1.index(s[i]) + 1:]  

        ch1 += s[i]  # Add the current character to the substring

        # Update the longest substring if the new one is longer
        if len(ch1) > len(longest):
            longest = ch1  

    return longest  # Return the longest found substring

# User input
input_string = input("Enter a string: ")  # Prompting user for input
print("Longest non-repeating substring is:", longest_nonrepeating(input_string))  # Output the result
