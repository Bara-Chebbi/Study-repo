#include <stdio.h>  // Include standard I/O functions.
#include "stack.h"  // Include our stack functions.

int main() {
    Stack myStack;        // Declare a Stack variable.
    initStack(&myStack);  // Initialize the stack.

    // Push values into the stack while maintaining sorted order.
    pushSorted(&myStack, 10);
    pushSorted(&myStack, 5);
    pushSorted(&myStack, 20);
    pushSorted(&myStack, 15);
    pushSorted(&myStack, 1);

    // Display the contents of the stack.
    printStack(&myStack);

    return 0;  // Return 0 to indicate successful execution.
}
