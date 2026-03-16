// Write a C program to convert a string into uppercase.


#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    printf("Enter string: ");
    fgets(str1, sizeof(str1), stdin);

    strupr(str1);
    printf("Uppercase string: %s",str1);

    return 0;
    
}