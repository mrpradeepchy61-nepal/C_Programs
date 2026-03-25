

#include<stdio.h>
struct student{
    char name[30];
    int roll;
    int marks[5];
}s[5];

int main() {
    int i,j;
    for(i=0; i<5; i++){
        printf("Enter name of %d student: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter rollnumber: ");
        scanf("%d", &s[i].roll);

        for(j=0; j<5; j++){
            printf("Enter marks of %d subject: ", j+1);
            scanf("%d", &s[i].marks[j]);
        }
    }

    for(i=0; i<5; i++){
        int total=0;
        float avg=0;
        for(j=0; j<5; j++){
            total += s[i].marks[j];
        }
        avg = total/5;
        

        if(avg>=60){
            printf("\n Information of student");
            printf("\nName: %s", s[i].name);
            printf("\nROll number: %d", s[i].roll);
            printf("\nTotal marks in 5 subject is: %d", total);
            printf("Average marks is: %.2f",avg);
        }
    }
    return 0;
}