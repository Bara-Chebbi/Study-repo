#include <stdio.h>
#include <stdlib.h>

int main(){
    //pointer : reference that holds a memory address to another variable


    int age = 21;
    int *pAge = &age;
    
    printf("address of the age %p\n", &age);
    printf("value of pAge %d\n", pAge);

    printf("Size of age in Bytes is %d\n", sizeof(age));
    printf("Size of pAge in Bytes is %d\n", sizeof(pAge));

    printf("value of age %d\n", age);
    printf("Value at stored address %d\n", *pAge);
    
    
    
    return 0;
}