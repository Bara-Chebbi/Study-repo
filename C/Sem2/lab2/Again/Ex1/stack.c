#include <stdio.h>    // Includes standard I/O functions.
#include "stack.h"    // Includes our stack header file.

void initStack(Stack *s) {
  s->top = -1;      // Sets the top index to -1, indicating an empty stack.
}

int isFull(Stack *s) {
  if (s->top == MAX_SIZE - 1)  // Checks if the top index reached the max size.
  {
    return 1;  // Stack is full.
  }
  else
  {
    return 0;  // Stack is not full.
  }
  // return s->top == MAX_SIZE - 1;  (Alternative concise version)
}

int isEmpty(Stack *s) {
  return s->top == -1;  // Returns 1 (true) if stack is empty, otherwise 0 (false).
}

void pushSorted(Stack *s, int value) {
  if (isFull(s)) {  // Check if the stack is full before pushing.
    printf("Stack is full!\n");
    return;
  }

  int temp[MAX_SIZE]; // Temporary array to hold elements while inserting.
  int tempTop = -1;   // Temporary stack index.

  // Move elements greater than `value` to temporary storage.
  while (!isEmpty(s) && s->data[s->top] > value) {
    temp[++tempTop] = s->data[s->top--];  // Pop from main stack, push to temp.
  }

  // Insert `value` in its correct sorted position.
  s->data[++s->top] = value;

  // Move back the elements from temp storage to main stack.
  while (tempTop >= 0) {
    s->data[++s->top] = temp[tempTop--];
  }
}

void printStack(Stack *s) {
  if (isEmpty(s)) {   // Check if the stack is empty.
    printf("Stack is empty!\n");
    return;
  }

  printf("Stack (bottom to top): ");
  for (int i = 0; i <= s->top; i++) {  // Iterate from bottom to top.
    printf("%d ", s->data[i]);       // Print each element.
  }
  printf("\n");
}
