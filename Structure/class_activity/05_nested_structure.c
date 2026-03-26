// Program to accept data from user

#include <stdio.h>
struct Employee{
    char ename[30];
    int ssn;
    float salary;
    struct date{
        int date;
        int month;
        int year;
    }doj;
}emp;

int main()
{
    printf("Enter name of employee: ");
    scanf("%s", emp.ename);
    printf("Enter ssn: ");
    scanf("%d", &emp.ssn);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);
    printf("Enter date: ");
    scanf("%d", &emp.doj.date);
    printf("Enter month: ");
    scanf("%d", &emp.doj.month);
    printf("Enter year: ");
    scanf("%d", &emp.doj.year);

    printf("\n Employee Name: %s", emp.ename);
    printf("\n Employee ssn: %d", emp.ssn);
    printf("\n Employee salary: %.2f", emp.salary);
    printf("\n EMployee DOJ: %d %d %d", emp.doj.date, emp.doj.month, emp.doj.year);

    return 0;
}