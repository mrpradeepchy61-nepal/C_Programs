// Write a C program to count digits, alphabets, and special characters in a string.

#include<stdio.h>
int main(){
    char str[100];
    int i, digits=0, alphabets=0, special_character=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i]!='\0'; i++){
        if(str[i]>='0' && str[i]<='9'){
            digits++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            alphabets++;
        }
        else{
            special_character++;
        }
    }
    printf("Digits: %d\n", digits);
    printf("Alphabets: %d\n", alphabets);
    printf("Special Character: %d\n", special_character);

    return 0;
}