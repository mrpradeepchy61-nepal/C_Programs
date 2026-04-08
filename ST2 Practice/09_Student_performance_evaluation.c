//9. Student Performance Evaluation (Using Structure only)

#include<stdio.h>

struct Student{
	char name[50];
	int totalsubject;
	float marks;
};

int main(){
	int n, i;
	printf("Enter number of students: ");
	scanf("%d", &n);
	
	struct Student S[n];
	
	for(i=0; i<n; i++){
		printf("Enter name of student: ");
		scanf("%s", S[i].name);
		printf("Enter total subjects: ");
		scanf("%d", &S[i].totalsubject);
		printf("Enter marks: ");
		scanf("%f", &S[i].marks);
	}
	
	for(i=0; i<n; i++){
		float avg = S[i].marks/S[i].totalsubject;
		
		printf("\nName: %s\n", S[i].name);
		printf("Average: %.2f\n", avg);
		
		printf("Category: ");
		if(avg>=80){
			printf("Outstanding\n");
		}
		else if(avg>=50 && avg <=79){
			printf("Good\n");
		}
		else {
			printf("Needs Improvements\n");
		}
	}
	return 0;
}