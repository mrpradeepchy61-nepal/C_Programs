// Write a C program to replace a character in a string with another character.

#include<stdio.h>
int main(){
    char str[100], oldchar, newchar;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to replace: ");
    scanf(" %c",&oldchar);
    printf("ENter new character: ");
    scanf(" %c",&newchar);

    for(i=0; str[i]!='\0'; i++){
        if(str[i]==oldchar){
            str[i] = newchar;
        }
    }

    printf("Modified string: %s", str);
    return 0;
}