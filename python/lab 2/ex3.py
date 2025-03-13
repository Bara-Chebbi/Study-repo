#ther is a problem
def calculate_average(numbers):
    # Check if the list is empty
    if len(numbers) == 0:
        return None  # Return None to indicate no valid numbers
    
    # Calculate the sum of all numbers
    total = sum(numbers)
    
    # Count the number of elements in the list
    count = len(numbers)

    # Calculate the average
    avg = total / count
    return avg  # Return the calculated average

# Get user input and convert it into a list of numbers
numbers = input("Enter numbers separated by spaces: ").split()

# Call the function and store the result
result = calculate_average(numbers)

# Display the result
if result is None:
    print("The list is empty, cannot calculate average.")
else:
    print(f"The avg is {result}")
