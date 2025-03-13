#ifndef EX5_H
#define EX5_H

// Structure to store start and end positions of sub-expressions
typedef struct {
    int start;
    int end;
} par;

// Stack structure to hold parentheses positions
typedef struct {
    int top;
    par t[50];
    int size;
} mystack;

// Function declarations
unsigned isempty(mystack p);
unsigned isfull(mystack p);
void push(mystack *p, int start, int end);
void pop(mystack *p);
void initstack(mystack *p);
void display_substring(char *input, int start, int end);
void ExtractSubExpression(char *input);

#endif