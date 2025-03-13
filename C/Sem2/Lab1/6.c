#include <stdio.h>
#include <stdlib.h>


void concat(int *A,int *B, int n, int m, int *R) {
    for (int i = 0; i < n; i++)
    {
        R[i]=A[i];
    }
    for (int i = 0; i < m; i++)
    {
        R[n+i]=B[i];
    }
}

void main(){
    int n,m;
    //to enter the n and m
    printf("Enter the n = ");
    scanf("%d", &n);
    printf("Enter the m = ");
    scanf("%d", &m);
    int *A=(int *)malloc(n*sizeof(int));
    int *B=(int *)malloc(m*sizeof(int));
    int *Result=(int *)malloc((n+m) * sizeof(int));

    //to enter the elements of A and B
    for(int i=0;i<n;i++){
        printf("Enter the element of A[%d] = ",i);
        scanf("%d", &A[i]);   
    }
    for (int i = 0; i < m; i++)
    {
        printf("Enter the element of B[%d] = ",i);
        scanf("%d", &B[i]);
    }
    concat(A,B,n,m,Result);
    //to print the result
    for(int i=0;i<n+m;i++){
        printf("R[%d]= %d ",i,Result[i]);
    }
    //free allocate memory
    free(A);
    free(B);
    free(Result);
    
    
}