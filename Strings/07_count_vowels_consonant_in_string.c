// Write a C program to count the number of vowels and consonants in a string.

#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    int i, vowelcount=0, consonantCount=0, len;

    printf("Enter string: ");
    fgets(str1, sizeof(str1), stdin);

    len = strlen(str1);

    for(i=0; i<len; i++){
        if(str1[i] == 'a' || str1[i] == 'e' || str1[1] == 'i' || str1[i] == 'o' || str1[i] == 'u'
        || str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U'){
            vowelcount++;
        }

        else if((str1[i] >= 'a' && str1[i] <= 'z') || str1[i] >= 'A' && str1[i] <= 'Z'){
            consonantCount++;
        }
    }

    printf("Vowel in string is : %d\n", vowelcount);
    printf("Consonant in string is : %d\n", consonantCount);

    return 0;
}