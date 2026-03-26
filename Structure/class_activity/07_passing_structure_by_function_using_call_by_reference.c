// TO pass a structure by function using call by reference

//NOTE:-  In case of reference arrow operator is used in place of dot operator

#include <stdio.h>
struct student{
    char name[30];
    int roll;
}s1;

void Display(struct student *stu){
    printf("Student Name: %s\n", stu->name);
    printf("Student Rollnumber: %d\n", stu->roll);
}

int main()
{
    printf("Enter name of student: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    Display(&s1);

    return 0;
}

