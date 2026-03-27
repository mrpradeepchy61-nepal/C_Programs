#include <stdio.h>
#include <stdlib.h>

struct Student{
    int id;
    float marks;
};

int main()
{
    struct Student *students;
    int num_records;
    printf("Enter number of records: ");
    scanf("%d", &num_records);

    students = (struct Student *)malloc(num_records * sizeof(struct Student));

    // Always check if allocation was successful
    if(students == NULL){
        printf("Memory allocation failled\n");
        return 1;
    }

    //Access members using the arrow operator or array notation
    for(int i=0; i<num_records; i++){
        printf("Enter id and marks of %d student: ", i+1);
        scanf("%d %f", &((students + i)->id), &((students + i)->marks));
    }

    printf("\nDIsplaying Information:\n");
    for(int i=0; i<num_records; i++){
        printf("Student %d ID: %d, Marks: %.2f\n", i+1, (students + i)->id,(students + i)->marks);
    }

    free(students);
    students = NULL;
    return 0;
}