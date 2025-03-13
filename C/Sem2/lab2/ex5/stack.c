#include <stdio.h>
#include <stdlib.h>
#include "ex5.h"
#include <string.h>

// Check if the stack is empty
unsigned isempty(mystack p) {
  return p.top == 0;
}

// Check if the stack is full
unsigned isfull(mystack p) {
  return p.top == p.size;
}

// Push a new pair (start, end) onto the stack
void push(mystack *p, int start, int end) {
  p->t[p->top].start = start;
  p->t[p->top].end = end;
  p->top++;
}

// Initialize the stack
void initstack(mystack *p) {
  p->top = 0;
}

// Display a substring from start to end indices
void display_substring(char *input, int start, int end) {
  for (int i = start; i <= end; i++) {
    putchar(input[i]);
  }
  putchar('\n');
}

// Extract and display all sub-expressions in parentheses
void ExtractSubExpression(char *input) {
  mystack p;
  initstack(&p);
  int position[50];
  int postop = 0;

  // Traverse the input expression
  for (int i = 0; input[i] != '\0'; i++) {
    if (input[i] == '(') {
      position[postop++] = i; // Record position of opening parentheses
    } else if (input[i] == ')') {
      if (postop > 0) {
        int start = position[--postop]; // Pop last opening parenthesis
        push(&p, start, i);  // Push the current pair (start, end) onto the stack
      }
    }
  }

  // Display sub-expressions starting from the innermost
  while (!isempty(p)) {
    int start = p.t[p.top - 1].start;
    int end = p.t[p.top - 1].end;
    p.top--;
    display_substring(input, start, end ); // Print content inside the parentheses
  }
}