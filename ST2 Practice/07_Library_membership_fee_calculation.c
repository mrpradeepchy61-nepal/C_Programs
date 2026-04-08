//Qsn-7: Library Mmbership Fee Calculation

#include<stdio.h>
struct Member{
	int ID;
	char name[30];
	int books;
};

int main(){
	int member, i;
	printf("Enter number of members: ");
	scanf("%d", &member);
	
	struct Member m[member];
	
	for(i=0; i<member; i++){
		printf("Enter ID: ");
		scanf("%d", &m[i].ID);
		printf("Enter name: ");
		scanf("%s", m[i].name);
		printf("Enter number of books issued: ");
		scanf("%d", &m[i].books);
	}
	
	for(i=0; i<member; i++){
		int fee = m[i].books * 50;
		
		printf("\nID: %d\n", m[i].ID);
		printf("Name: %s\n", m[i].name);
		printf("Total Fee: %d\n", fee);
		
		printf("Category: ");
		if(m[i].books<=3){
			printf("Regular\n");
		}
		else if(m[i].books>=4 && m[i].books<=7){
			printf("Active Reader\n");
		}
		else{
			printf("Book Lover\n");
		}
	}
	return 0;
	
}