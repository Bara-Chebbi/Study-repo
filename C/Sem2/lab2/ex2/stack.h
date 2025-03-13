#include <stdio.h>
#include <stlib.h>

#define STACKSIZE 50
typedef struct{
  int top;
  int t[STACKSIZE];
  int size;
  }mystack;

  unsigned isempty(mystack p);
  unsigned isfull(mystack p);
  void push(mystack *p,int val);
  void pop(mystack *p);
  int last(mystack p);
  void sorted_insert(mystack *p,int val);
  void identical(mystack p1,mystack p2);