#include <stdio.h>
#include <stdlib.h>
#include "ex5.h"

int main() {
    char exp[50];

    // Ask for the expression input
    printf("Give an expression: ");
    scanf("%s", exp); // Read the expression without the '&' (since exp is already a pointer)

    // Extract and display sub-expressions
    ExtractSubExpression(exp);

    return 0;
}