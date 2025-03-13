#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {                // Main function: program entry point.
    mystack p1, p2;         // Declare two stack variables: p1 and p2.
    int size, x;            // Declare integers: 'size' for the stack capacity input by the user, and 'x' for individual elements.

    p1.top = 0;             // Initialize the top index of stack p1 to 0 (indicating empty).
    p2.top = 0;             // Initialize the top index of stack p2 to 0.

    printf("give a size for two stacks : "); // Ask the user to enter the size for both stacks.
    scanf("%d", &size);     // Read the user input and store it in variable 'size'.

    p1.size = size;         // Set the size (capacity) for stack p1.
    p2.size = size;         // Set the size (capacity) for stack p2.

    printf("**** fill stack 1 ***"); // Indicate that the program will now fill the first stack.
    for (int i = 0; i < p1.size; i++) { // Loop from 0 to the stack's size (number of elements to add).
        printf("give element %d", i);   // Prompt the user to enter element number i.
        scanf("%d", &x);     // Read the integer value and store it in x.
        push(&p1, x);        // Push the entered value onto stack p1.
    }

    printf("**** fill stack 2 ***"); // Indicate that the second stack is about to be filled.
    for (int i = 0; i < p2.size; i++) { // Loop for each element of the second stack.
        printf("give element %d", i);   // Prompt the user for the i-th element for stack p2.
        scanf("%d", &x);     // Read the user input into x.
        push(&p2, x);        // Push x onto stack p2.
    }

    // Compare the two stacks using the identical function.
    if (identical(p1, p2))
        printf("p1 and p2 are identical "); // If the function returns true (non-zero), print that the stacks are identical.
    else
        printf("p1 and p2 are not identical "); // Otherwise, print that they are not identical.


    return 0;
}
