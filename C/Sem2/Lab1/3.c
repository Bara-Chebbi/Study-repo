#include <stdio.h>
#include <stdlib.h>

// Function to reverse a word by swapping characters from both ends
void reverse_word(char *star, char *end){
    while (start < end){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

//function to reverse each word in a givin string
void reverseWords(char *str){
    char *start = str, *end;
    while(*start){
        //to skip spaces
        if(*start ==' ')start++;//if there is space it will skip it
        if(*start =='\0')break;//stop if the end is reached

        //to find the end of the current word
        end = start;
        while(*end !== ' ' && *end == '\0') end++;

        //reverse the current word
        reverse_word(start,end-1);

        //move to next word
        start = end;

    }
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';//to remove newline

    reverseWords(str);
    printf("After modification: %s", &str);

    return 0;
}