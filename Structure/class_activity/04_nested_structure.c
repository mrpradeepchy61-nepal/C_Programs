// Sample of nested structure

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
}emp = {"Pradeep",1293,100000,{12,1,1990}};

int main()
{
    printf("\n Employee Name: %s", emp.ename);
    printf("\n Employee ssn: %d", emp.ssn);
    printf("\n Employee salary: %.2f", emp.salary);
    printf("\n Employee DOJ: %d %d %d", emp.doj.date, emp.doj.month, emp.doj.year);

    return 0;
}