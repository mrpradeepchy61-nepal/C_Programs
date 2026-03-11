// Write a C program to find the average of an array

#include<stdio.h>
int main() {
    int arr[5] = {2,3,1,4,5};
    int i, sum=0, Avg;

    for(i=0; i<5; i++){
        sum += arr[i];
    }
    
    Avg = sum/5;

    printf("Average of an array elements is : %d", Avg);
    return 0;
}