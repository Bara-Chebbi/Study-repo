#gussing game from number 1 to 100
import random

def gussing_game():
    num = random.randint(1,100) #random number to guess
    count =0
    while True: #loop until the number is guessed
        count+=1
        random_Num = int(input("Guess the number between 1 to 100: ")) 
        if random_Num < 1 or random_Num > 100: #if the number is out of range
            print("Try again --> Please enter a number between 1 to 100") 
        elif random_Num < num:
            print("to low!!!!!")
        elif random_Num > num:
            print("to high!!!!!")
        else:
            print(f"you win!!!!!!\nyou found it in {count} times")
            break
        
gussing_game()