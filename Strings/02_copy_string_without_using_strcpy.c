// Write a C program to copy one string to another without using strcpy().


#include<stdio.h>
#include<string.h>
int main() {
    char originalStr[100];
    char copiedStr[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(originalStr, sizeof(originalStr), stdin);

    while(originalStr[i] != '\0'){
        copiedStr[i] = originalStr[i];
        i++;
    }
    copiedStr[i] = '\0';
    printf("Original string is: %s\n", originalStr);
    printf("Copied string is: %s", copiedStr);
    
}