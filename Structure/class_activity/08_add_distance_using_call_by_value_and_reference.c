// add distance through call by value and call by reference

#include <stdio.h>

struct distance{
    int feet;
    int inch;
};

void Add(struct distance d1, struct distance d2, struct distance *d3){
    d3->feet = d1.feet + d2.feet;
    d3->inch = d1.inch + d2.inch;

    if(d3->inch >=12){
        d3->inch -= 12;
        ++d3->feet;
    }
}


int main()
{
    struct distance dist1, dist2, dist3;
    printf("Enter dist1 feet: ");
    scanf("%d", &dist1.feet);
    printf("Enter dist1 inch: ");
    scanf("%d", &dist1.inch);
    
    printf("Enter dist2 feet: ");
    scanf("%d", &dist2.feet);
    printf("Enter dist2 inch: ");
    scanf("%d", &dist2.inch);

    Add(dist1, dist2, &dist3);

    printf("Feet= %d\n Inch= %d", dist3.feet, dist3.inch);
    return 0;
}