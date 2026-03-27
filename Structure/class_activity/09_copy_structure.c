//Copy Structure and memory allocation using DMA

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct test
{
    int rno;
    char name[20];
};

int main()
{
    struct test t1;
    struct test t2;
    t1.rno=10;
    strcpy(t1.name,"Sanjay");
    printf("t1 result:  %d  %s", t1.rno,t1.name);

    t2=t1;
    t2.rno=50;
    printf("\nt2 result: %d  %s", t2.rno,t2.name);

    struct test *p;
    p=&t1;

    printf("\nPointer result: %d  %s", p->rno,p->name);


    struct test *ptr;
    ptr=(struct test *)malloc(sizeof(struct test));
    ptr->rno=100;
    strcpy(ptr->name,"Ram");

    printf("\nPtr result: %d  %s", ptr->rno,ptr->name);

    return 0;
}