#include <stdio.h>
#include <stdlib.h>



int main(){
    char str[100], ch;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin)

    //to search for the word
    printf("Enter a character: ");
    scanf("%c ", &ch);
    //to find the occurence of the word
    char *ptr =strchr(str, c);

    //if the character is found
    if(ptr){
        printf("The string from character %c : %s\n", c, ptr);
    }
    else{
        printf("The character is not found!!")
    }

    return 0;
}