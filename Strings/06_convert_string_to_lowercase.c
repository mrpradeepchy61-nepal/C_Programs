// Write a C program to convert a string into lowercase.

#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];

    printf("ENter a string: ");
    fgets(str1, sizeof(str1), stdin);

    strlwr(str1);

    printf("String in lowercase is: %s", str1);

    return 0;
}