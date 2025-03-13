#ask the user to enter the age and if they have an ID
age = int(input("Enter your Age !!"))
has_ID = input("Do you have an ID?").lower() == "yes"

#check if the user is older then 18 or no and has an ID or no
if age >= 18 and has_ID:
    print("You are eligible to vote!!")
else:
    print("You are not eligible to vote!!")
