#include <stdio.h>
#include <stdlib.h>
void sizeEnter(){
    int n;
    do{
        printf("Enter size n: ");
        scanf("%d", &n);
    }while(n<1);
}
void load(int *t, int n){
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++){
        printf("Enter element T[%d]",i);
        scanf("%d", t[i]);
    }
}
void display(int *t, int n){
    printf("Diplaying the elements: \n");
    for(int i=0;i<n;i++){
        printf("T[%d]", t[i]);
    }
}
void *seq(int *t, int n, int x){
    for (int i=0;i<n;i++){
        if(t[i]==x){
            return &t[i];
        }
    }
    return null;
}
int *findMax(int *t, int n){
    int *max= t;
    for(int i=0;i<n;i++){
        if(t[i] >*max){
            max=&t[i];
        }
    }
    return max;
}
void eliminate(int *t, int *n, int x){
    for(int i=0;i<*n;i++){
        for(int j=0;j<*n-1;j++){
            t[j]=t[j+1];
        }
        (*n)--;
        i--;
    }
}
int main() {
    int N = sizeEnter(); // Get the size of the array
    int *T = (int *)malloc(N * sizeof(int)); // Dynamically allocate memory for the array

    load(T, N); // Fill the array
    display(T, N); // Display the array

    // Searching for a value
    int x;
    printf("Enter a value to search for: ");
    scanf("%d", &x);
    int *found = seq(T, N, x);
    if (found) {
        printf("Value found at address: %p\n", (void *)found);
    } else {
        printf("Value not found.\n");
    }