#include <stdio.h>
#include <stdlib.h>

void main(){
    int A = 2,B=9,C=3;
    int *p1, * p2;
    p1 = & A;
    p2 = & B;
    B = *p1 + *p2;
    p1 = &B;
    printf("%d------%d", *p1, p1);
}