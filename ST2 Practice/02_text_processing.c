//2. count uppercase, Vowels and consonants

#include<stdio.h>

int countUpper(char str[]){
	int count = 0, i=0;
	while(str[i] != '\0'){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			count++;
		}
		i++;
	}
	return count;
}

int countVowels(char str[]){
	int count = 0, i=0;
	while(str[i] != '\0'){
		char ch = str[i];
		if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'
		|| ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
			count++;
		}
		i++;
	}
	return count;
}

int countConsonants(char str[]){
	int count = 0, i=0;
	while(str[i] != '\0'){
		char ch = str[i];
		
		if(((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) &&
		   !(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'
		   || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')){
			count++;
		}
		i++;
	}
	return count;
}

int main() {
	char str[200];
	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);
	
	printf("Uppercase Letters: %d\n", countUpper(str));
	printf("Vowels: %d\n", countVowels(str));
	printf("Consonants: %d", countConsonants(str));
}