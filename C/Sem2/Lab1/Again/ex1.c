#include <stdio.h>
#include <stdlib.h>

// Function to swap two characters using pointers
void swapchar(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    char a, b; // Declare two char variables

    // Read the first character (space before %c handles newline issues)
    printf("Enter the first character: ");
    scanf(" %c", &a);

    // Read the second character
    printf("Enter the second character: ");
    scanf(" %c", &b);

    // Swap the characters
    swapchar(&a, &b);

    // Display the result
    printf("After swapping: A = %c, B = %c\n", a, b);
    
    return 0; // Indicate successful execution
}
