import random

def generate_random_number():
    """Generates a random number between 1 and 100."""
    return random.randint(1, 100)

def guess_number():
    """Asks the user to guess the random number and provides feedback."""
    target = generate_random_number()
    while True:
        try:
            guess = int(input("Guess a number between 1 and 100: "))
            if guess < target:
                print("Too low! Try again.")
            elif guess > target:
                print("Too high! Try again.")
            else:
                print("Congratulations! You guessed the number.")
                break
        except ValueError:
            print("Invalid input. Please enter a number.")

# Run the guessing game
guess_number()