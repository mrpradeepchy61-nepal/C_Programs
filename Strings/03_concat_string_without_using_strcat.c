// Write a C program to concatenate two strings without using strcat().

#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    int i=0, j=0;

    printf("Enter a first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter a second string: ");
    fgets(str2, sizeof(str2), stdin);

    while(str1[i] != '\0'){
        i++;
    }

    while(str2[j] != '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("Concatenated string is: %s", str1);

    return 0;

}
