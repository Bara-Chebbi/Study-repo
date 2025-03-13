#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"


// Function: isempty  
// Purpose: Check if the stack is empty.
unsigned isempty(mystack p) {
    return p.top == 0;      // Return 1 (true) if 'top' is 0 (no elements), otherwise 0 (false).
}

// Function: isfull  
// Purpose: Check if the stack is full.
unsigned isfull(mystack p) {
    return p.top == p.size; // Return 1 (true) if the number of elements (top) equals the maximum stack size.
}

// Function: push  
// Purpose: Push a new element (val) onto the stack.
void push(mystack *p, int val) {
    p->t[p->top++] = val;   // Place 'val' at the current top position of the stack, then increment 'top'.
}

// Function: pop  
// Purpose: Remove the top element of the stack.
void pop(mystack *p) {
    p->t[--p->top];         // Decrement 'top' first (thus "removing" the element), then access the array.
                            // Note: The returned value is discarded.
}

// Function: last  
// Purpose: Return the top element of the stack.
//          (Note: In this code, it improperly decrements the stack so that it affects the data.)
int last(mystack *p) {
    p.top--;                // Decrement 'top'. (This line uses dot notation incorrectly on a pointer; intended to be p->top--.)
    return p.t[p.top];      // Return the element at the new top position.
}

// Function: identical  
// Purpose: Compare two stacks (p1 and p2) to see if they contain identical elements in the same order.
int identical(mystack p1, mystack p2) {
    int test = 1;           // Initialize a flag 'test' to 1 (true), assuming the stacks are identical.
    while ((test) && (!isempty(p1) && !isempty(p2))) { // Loop while the flag is true and both stacks are not empty.
        if (last(p1) == last(p2)) { // Compare the top elements of each stack.
            pop(&p1);     // If they are equal, remove the top element from p1.
            pop(&p2);     // Remove the top element from p2.
        }
        else {
            test = 0;     // If the top elements differ, set the flag to 0 (false).
        }
    }
    return test;          // Return whether the stacks were identical (1 if yes, 0 if not).
}

// Function: identical_2  
// Purpose: An alternative implementation to compare if two stacks are identical.
int identical_2(mystack p1, mystack p2) {
    while ((!isempty(p1)) && (!isempty(p2)) && (last(p1) == last(p2))) {
        // While both stacks are not empty and their top elements are equal,
        pop(&p1);         // Remove the top element of p1.
        pop(&p2);         // Remove the top element of p2.
    }
    return (isempty(p1)) && (isempty(p2)); // Return 1 if both stacks end up empty (meaning they were identical); otherwise return 0.
}
