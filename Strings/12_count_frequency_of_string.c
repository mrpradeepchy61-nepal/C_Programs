// Write a C program to find the frequency of each character in a string.

#include<stdio.h>

void frequency(char s[]){
    int i, j, count;

    for(i=0; s[i]!='\0'; i++){
        count = 1;
        if(s[i]== '*'){
            continue;
        }
        for(j=i+1; s[j]!='\0'; j++){
            if(s[i]==s[j]){
                count++;
                s[j] = '*';
            }
        }
        printf("%c = %d\n",s[i], count);
    }
}

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    frequency(str);
    return 0;
}