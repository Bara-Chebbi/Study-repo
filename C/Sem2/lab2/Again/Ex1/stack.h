#ifndef STACK_H        // Include guard to prevent multiple inclusions of this file.
#define STACK_H

#define MAX_SIZE 1000  // Defines the maximum number of elements the stack can hold.

typedef struct {
  int data[MAX_SIZE]; // Array to store stack elements.
  int top;           // Index of the top element in the stack (-1 means empty).
} Stack;

// Function declarations
void initStack(Stack *s);    // Initializes the stack.
int isFull(Stack *s);        // Checks if the stack is full.
int isEmpty(Stack *s);       // Checks if the stack is empty.
void pushSorted(Stack *s, int value); // Pushes an element while keeping the stack sorted.
void printStack(Stack *s);   // Prints the stack elements.

#endif  // End of include guard.
