/* write a program to accept name, rollnumber, and marks in 5 subjects of 5 students
   and calculate total marks and average of each students . 
   Display the students details */

#include <stdio.h> 
struct student { 
char sname[20];
int roll;
int marks[5];
}; 

int main() {
struct student s[3]; 

for(int i=0; i<3; i++){
    printf("Enter name of %d student: ", i+1);
    scanf("%s",s[i].sname);
    printf("Enter roll number: ");
    scanf("%d",&s[i].roll);
    for(int j=0;j<5;j++){
        printf("Enter marks of %d subject: ", j+1);
        scanf("%d",&s[i].marks[j]);
    }
}

for(int i=0;i<3;i++){
    printf("\n\n Information of %dst Student",i+1);
    printf("\n Name = %s",s[i].sname);
    printf("\n Roll No = %d",s[i].roll);
    int total = 0;
    int avg = 0;
    for(int j=0;j<5;j++){
        total = total + s[i].marks[j];
    }
    avg = total / 5;
    printf("\n Total Marks = %d",total);
    printf("\n Average Marks = %d",avg);
}

return 0; 
}