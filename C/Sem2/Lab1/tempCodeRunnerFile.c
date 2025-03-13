#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n;
    int sum = 0;


    printf("Enter the dimention for matrix (M) ");
    scanf("%d", &m);
    printf("Enter the dimention for matrix (N) ");
    scanf("%d", &n);

    //dynamic allocate array
    int **array = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            array[i] = (int *)malloc(n * sizeof(int));
        }
    }



    printf("Enter the elments for the matrix \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j]; // to calculate the sum of all elements
        }
    }
    

    //display the matrix
    printf("Table: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
        {
            printf("%d", array[i][j]);
        }
        printf("\n");    
    }

    printf("Sum of elements");
    for (int i = 0; i < m; i++)
    {
        free(array[i]);
    }
    free(array);
    
    return 0;

}