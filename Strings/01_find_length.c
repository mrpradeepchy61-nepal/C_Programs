// Write a C program to find the length of a string without using strlen().

#include<stdio.h>
#include<string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    // scanf("%s",&str);

   fgets(str, sizeof(str), stdin);

    int length = 0;
    while(str[length] != '\0'){
        length++;
    }

    printf("Length of a string is: %d", length);
    return 0;
}