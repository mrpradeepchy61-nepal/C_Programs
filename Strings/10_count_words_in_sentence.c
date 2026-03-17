// Write a C program to count the number of words in a string

#include<stdio.h>
int main(){
    char str[100];
    int i=0, count=1;

    printf("ENter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0'){
        if(str[i] == ' '){
            count++;
        }
        i++;
    }
    printf("Total number of words is: %d",count);

    return 0;
}