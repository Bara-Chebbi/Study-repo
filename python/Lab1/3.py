#using def
def is_Strong_Password(password):
    if len(password) < 8:
        return False
    #check for at leastes one uppercase letter
    i=0 
    test=False
    while i<len(password) and test==False :
        if "A"<=password[i]<="Z":
            test=True
        else :
            i += 1

    #check for at least one lowercase letter
    i=0
    test=False
    while i<len(password) and test==False :
        if "a"<=password[i]<="z":
            test=True
        else :
            i += 1
    #check for at least one digit 
    i=0
    while i<len(password) and test==False :
        if "0"<=password[i]<="9":
            test=True
        else:
            i += 1
    
    #check for at least one special character
    i=0
    while i<len(password) and test==False :
        if not password[i].isalnum():
            test=True
        else:
            i += 1
    return test

pwd=input("give pwd : ")
print(is_Strong_Password(pwd))