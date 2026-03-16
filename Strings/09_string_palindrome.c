// Write a C program to check whether a string is palindrome or not.


#include<stdio.h>
#include<string.h>
int main(){
    char str[100], org[100];
    int len, i=0;

    printf("Enter a string: ");
    scanf("%s", str);

    strcpy(org, str);

    len = strlen(str);
    strrev(str);

    if(strcmp(str, org)==0){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;

}