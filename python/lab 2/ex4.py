def convert_to_fahrenheit(celsius_Temp):
    fahrenheit = (celsius_Temp * 9/5) +32 #to convert cel to fah
    return fahrenheit #returns the fahrenhiet after its converted 

celsius_Temp = float(input("Enter the temperature using Celsius : ")) #user input 
print(f"{convert_to_fahrenheit(celsius_Temp)}")