// To accepts name, marks in 5 subjects, rollno from user and calculate sum and average;

#include <stdio.h>
struct student{
    char name[30];
    int rollno;
    int marks[5];
}s1;

int main()
{
    int sum=0, i;
    float avg=0;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.rollno);

    for(i=0; i<5; i++){
        printf("Enter marks in %d subject: ", i+1);
        scanf("%d", &s1.marks[i]);
    }

    for(i=0; i<5; i++){
        sum += s1.marks[i];
    }

    avg = sum/5;

    printf("Student Details: \n");
    printf("Name of Student is: %s\n", s1.name);
    printf("Roll No is: %d\n", s1.rollno);
    printf("Total marks in 5 subjects is: %d\n", sum);
    printf("Average marks is: %.2f", avg);

    return 0;
}