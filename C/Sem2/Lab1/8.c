#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    char *firstname;
    float mean;
} Student;

// Function to fill a static group
void fills(Student group[], int *n) {
    printf("Enter number of students: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++) {
        group[i].name = (char *)malloc(50 * sizeof(char));      // Allocating memory for name
        group[i].firstname = (char *)malloc(50 * sizeof(char)); // Allocating memory for firstname

        printf("Enter name: ");
        scanf("%s", group[i].name);

        printf("Enter first name: ");
        scanf("%s", group[i].firstname);

        printf("Enter mean: ");
        scanf("%f", &group[i].mean);
    }
}

// Function to fill a dynamic group
void filld(Student *group, int n) {
    for (int i = 0; i < n; i++) {
        group[i].name = (char *)malloc(50 * sizeof(char));      // Allocating memory for name
        group[i].firstname = (char *)malloc(50 * sizeof(char)); // Allocating memory for firstname

        printf("Enter name: ");
        scanf("%s", group[i].name);

        printf("Enter first name: ");
        scanf("%s", group[i].firstname);

        printf("Enter mean: ");
        scanf("%f", &group[i].mean);
    }
}

// Function to calculate the average mean
float cal_avg(Student *group, int *n) {
    if (*n == 0) return 0.0;

    float sum = 0;
    for (int i = 0; i < *n; i++) {
        sum += group[i].mean;
    }
    return sum / (*n);
}

int main() {
    int n;
    
    // Static group
    Student group[100];
    fills(group, &n);

    // Dynamic group
    Student *group2 = (Student *)malloc(n * sizeof(Student));
    if (group2 == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    filld(group2, n);

    // Calculate and print averages
    printf("Average of static group: %.2f\n", cal_avg(group, &n));
    printf("Average of dynamic group: %.2f\n", cal_avg(group2, &n));

    // Free dynamically allocated memory
    for (int i = 0; i < n; i++) {
        free(group[i].name);
        free(group[i].firstname);
        free(group2[i].name);
        free(group2[i].firstname);
    }
    free(group2);

    return 0;
}
