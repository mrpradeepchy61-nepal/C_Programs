//8. Employee Salary and Work Category(Using structure)

#include<stdio.h>
struct employee {
	int id;
	char name[50];
	int hours;
};

int main(){
	int n, i;
	printf("Enter number of employee: ");
	scanf("%d", &n);
	
	struct employee E[n];
	
	for(i=0; i<n; i++){
		printf("Enter ID of an employee: ");
		scanf("%d", &E[i].id);
		printf("Enter name of an employee: ");
		scanf("%s", E[i].name);
		printf("Enter worked hours: ");
		scanf("%d", &E[i].hours);
	}
	
	for(i=0; i<n; i++){
		float salary = E[i].hours * 200;
		printf("\nID: %d\n", E[i].id);
		printf("Name: %s\n", E[i].name);
		printf("Salary: %.2f\n", salary);
		
		printf("Category: ");
		if(E[i].hours<=20){
			printf("Part-Time\n");
		}
		else if(E[i].hours>=21 && E[i].hours<=40){
			printf("Full-Time\n");
		}
		else {
			printf("Overtime Worker\n");
		}
	}
	
	return 0;
}