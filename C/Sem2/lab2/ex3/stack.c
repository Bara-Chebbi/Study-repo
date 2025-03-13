#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"stack.h"
unsigned isempty(stack p){return p.top ==0;}
unsigned isfull(stack p){return p.top == p.size;}
void push(stack *p, animal x){p->t[p->top++]=x;};
void pop(stack *p){p->t[--p->top];}

int last(stack p){
    p.top--;
    return p.t[p.top];
} 
void fill(stack*p,int n){
    for(int i=0;i<n;i++){
        animal a;
        printf("animal %d",i);
        scanf("%s",a.name);
        scanf("%d",&a.nblegs);
        push(&p,a);
    }
}
void display(stack * p){
    stack *p2;
    while(!is_empty(p)){
        push(&p2, last(p));
        printf("%s, %d", p->t[last(p).name], p->t[last(p).nblegs]);
        pop(&p);
    }
    while (!isempty (p2))
    {
        push (&p, last (p2));
        pop (&p2);
    }    
}   
void fill(stack p){
    animal a;
    while (!isfull)
    {
        char name = (char*) malloc(50 * sizeof(char));
        scanf("%s" a.name);
        scanf("%d", &a.name);
        push(&p, a);

    }
}
animal look(stack p){
    return last(p);
}
void duplicate(stack &p){
    if(!isfull(p)){
        push(&p, last(p));
    }
}
void swap(stack *p){
    animal x=last (p);
    pop (&p);
    animal y =last(p);
    pop (&p);
    push(&p,x);
    push(&p,y);
}
void deleteBipates(stack *p){
    stack *p2;
    while (!isempty)
    {
        animal a = last(p);
        if (a.nblegs != 2)
        {
            push(&)
        }
        
    }
    