// Write a C program to reverse a string without using library functions.


#include<stdio.h>
#include<string.h>

int main(){
    char str[100], rev[100];
    int i=0, j=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0'){ // calculate length of string
        i++;
    }

    i = i-2;  // avoid '\0' and new line;

    while(i>=0){
        rev[j] = str[i];
        i--;
        j++;
    }

    rev[j] = '\0';

    printf("Original string is: %s\n",str);
    printf("Reversed string is: %s", rev);
    return 0;
}