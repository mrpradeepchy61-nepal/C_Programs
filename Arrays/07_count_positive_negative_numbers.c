// Write a C programs to count positive numbers and negative numbers in an array

#include<stdio.h>
int main () {
    int arr[10] = {1,2,3,4,5,6,7,-2,-4,-1};
    int i, posCount=0, negCount=0;

    for(i=0; i<10; i++){
        if(arr[i]>0){
            posCount += 1;
        }
        else if(arr[i]<0){
            negCount += 1;
        }
    }
    printf("Total positive numberrs in an array is: %d\n", posCount);
    printf("Total negative numberrs in an array is: %d\n", negCount);

    return 0;
}