//10. EMployee payroll System

#include<stdio.h>

struct Employee {
	int id;
	char name[50];
	int hours;
	int rating;
	int absentdays;
};

int main(){
	int n, i;
	printf("Enter number of employee: ");
	scanf("%d", &n);
	
	struct Employee E[n];
	
	for(i=0; i<n; i++){
		printf("Enter employee ID: ");
		scanf("%d", &E[i].id);
		printf("Enter name of employee: ");
		scanf("%s", E[i].name);
		printf("Enter worked hours: ");
		scanf("%d", &E[i].hours);
		printf("Enter performance rating: ");
		scanf("%d", &E[i].rating);
		printf("Enter Absent Days: ");
		scanf("%d", &E[i].absentdays);
	}
	
	for(i=0; i<n; i++){
		float salary = 0;
		int bonus = 0;
		
		if(E[i].hours<=40){
			salary = E[i].hours * 200;
		}
		else if(E[i].hours>40){
			salary = (40*200) + (E[i].hours - 40) * 300;
		}
		
		if(E[i].rating == 5){
			bonus = 2000;
		}
		else if(E[i].rating == 4){
			bonus = 1000;
		}
		else if(E[i].rating == 3){
			bonus = 500;
		}
		else if(E[i].rating <=2 ){
			bonus = 0;
		}
		
		int deduction = 0;
		
		if(E[i].hours<20){
			deduction = 500;
		}
		if(E[i].absentdays>2){
			deduction = (E[i].absentdays * 300);
		}
		
		float totalSalary = salary + bonus - deduction;
		
		printf("\nID: %d\n", E[i].id); 
		printf("Name: %s\n", E[i].name);
		printf("Hours: %d\n", E[i].hours);
		printf("Gross Salary: %.2f\n", salary);
		printf("Bonus: %d\n", bonus);
		printf("Deduction: %d\n", deduction);
		printf("Net Salary: %.2f\n", totalSalary);
		printf("Category: ");
		
		if(E[i].hours<20){
			printf("Underworked\n");
		}
		else if(E[i].hours>=20 && E[i].hours<=40){
			printf("Regular Employee\n");
		}
		else if(E[i].hours>40 && E[i].rating<=4){
			printf("Overtime Performer\n");
		}
		else if(E[i].hours>40 && E[i].rating==5){
			printf("High Performer\n");
		}
	}
	
	
	
	return 0;
}