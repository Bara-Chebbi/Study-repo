import random  # Import at the top

def game():
    while True:  # Keep the game running
        user = input("Choose rock, paper, or scissors (or press 'q' to quit): ").lower()

        if user == 'q':  # Check if user wants to quit
            print("Game will close.")
            break  # Exit the loop instead of using exit()

        if user not in ['rock', 'paper', 'scissors']:
            print("Invalid choice, please try again.")
            continue  # Restart the loop if the input is invalid

        computer = random.choice(['rock', 'paper', 'scissors'])
        print(f"\nYou chose {user}, computer chose {computer}.\n")

        if user == computer:
            print(f"Both players selected {user}. It's a tie!")
        elif (user == 'rock' and computer == 'scissors') or \
             (user == 'paper' and computer == 'rock') or \
             (user == 'scissors' and computer == 'paper'):
            print("You win!")
        else:
            print("You lose!")

        print("\n")  # Add spacing for better readability

# Start the game
game()
