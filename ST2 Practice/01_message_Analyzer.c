/* MESSAGE ANALYZER: 
Take  a string from user and make a function for each to:
 	- Count how many special character 
 	- Count how many spaces
 	- Count how many digits are present

*/

#include<stdio.h>

int countSpecialCharacter(char str[]){
	int count = 0, i = 0;
	
	while(str[i] != '\0'){
		char ch = str[i];
		
		if(!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')
		|| (ch == ' ') || (ch == '\n'))){
			count++;
		}
		i++;
	}
	return count;
}

int countSpaces(char str[]){
	int count = 0, i = 0;
	while(str[i] != '\0'){
		if(str[i] == ' '){
			count++;
		}
		i++;
	}
	return count;
}

int countDigits(char str[]){
	int count = 0, i = 0;
	while(str[i] != '\0'){
		if(str[i] >= '0' && str[i] <= '9'){
			count++;
		}
		i++;
	}
	return count;
}

int main(){
	char str[200];
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	
	int special = countSpecialCharacter(str);
	int spaces = countSpaces(str);
	int digits = countDigits(str);
	
	printf("Special Characters: %d\n",special);
	printf("Spaces: %d\n",spaces);
	printf("Digits: %d", digits);
	return 0;
}