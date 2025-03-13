#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char *name;
    int nblegs;
}animal;

typedef struct
{
    animal t[100];
    int top;
    int size;
}stack;

int isempty(stack p);
int isfull(stack p);
int last(stack p);
void pop(stack *p);
void push(stack *p , animal a);
void display(stack *p);
void duplicate (stack *p);
void deleteBipates(stack *p);
void swap(stack *p);
animal look(stack);