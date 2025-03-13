#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int m,n;
    int sum=0;

    printf("Enter the m dimention : ");
    scanf("%d",&m);
    printf("Enter the n dimention : ")
    scanf("%d"&n);

    //create a dynamic memory allocate
    int**array=(int**)malloc(m * sizeof(int*));
    for(int i =0; i<m;i++){
        array[i]=(int*)malloc(n*sizeof(int*));
    }
    printf("Enter the elements for the array: ");
    for(i =0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Elements[%d][%d]", i,j);
            scanf("%d"&array[i][j]);
            sum += array[i][j];

        }
    }
    printf("Displaying The Elements: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
    printf("Displaying the sum");
    printf("Sum is : %d",sum);
    // Freeing dynamically allocated memory
    for (int i = 0; i < M; i++) { // Free memory for each row
        free(array[i]);
    }
    free(array); // Free memory for the main array
    return 0;
}
