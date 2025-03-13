#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int immg;
    int reel;   
}complex;

complex* fill(){

    complex *c = (complex*)malloc(sizeof(complex));
    if (c==NULL){
        printf("Error the allocation failed");
        exit(1);
    }
    //to enter reel and immg
    printf("Enter the real part of the complex number: ");
    scanf("%d", &c->reel);
    printf("Enter the imaginary part of the complex number: ");
    scanf("%d", &c->immg);
    return c;
}
complex * sum(complex *c1, complex *c2){
    complex *result = (complex*)malloc(sizeof(complex));
    result->reel = c1->reel + c2->reel;
    result->immg = c1->immg + c2->immg;
    return result;
}

int main(){
    complex *c1, *c2;
    c1 = fill();
    c2 = fill();
    complex* result = sum(c1, c2);
    printf("sum of reel is : %d\n", result->reel);
    printf("Sum of immg is : %d\n", result->immg);
    
    //free to allocate memory
    free(c1);
    free(c2);
    return 0;
}