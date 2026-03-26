// TO pass a structure by function using call by value

#include <stdio.h>
struct student{
    char name[30];
    int roll;
}s1;

void Display(struct student stu);

int main()
{
    printf("Enter student name: ");
    scanf("%s", s1.name);
    printf("Enter student roll number: ");
    scanf("%d", &s1.roll);
    Display(s1);

    return 0;
}

void Display(struct student stu){
    printf("\n Student Details\n");
    printf("Student Name: %s\n", stu.name);
    printf("Student ROllnumber: %d\n", stu.roll);
}