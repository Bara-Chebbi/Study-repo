#include <stdio.h>
#include <stdlib.h>

void permuter(char *x1, char *x2){
    char temp = *x1;
    *x1 = *x2;
    *x2=temp;
    printf("%c %c\n", *x1, *x2);
}


void main(){
    char A='x', B='y';
    permuter(&A, &B);
    printf("A=%c , B=%c\n", A, B);

}