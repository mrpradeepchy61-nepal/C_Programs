//count digits and symbols

#include<stdio.h>

int countDigits(char str[]){
	int count=0, i=0;
	
	while(str[i] != '\0'){
		if(str[i]>='0' && str[i]<='9'){
			count++;
		}
		i++;
	}
	return count;
}

int countSymbols(char str[]){
	int count=0, i=0;
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


int main(){
	char str[200];
	
	printf("Enter Password: ");
	fgets(str, sizeof(str), stdin);
	
	printf("Digits: %d\n", countDigits(str));
	printf("Symbols: %d", countSymbols(str));
}