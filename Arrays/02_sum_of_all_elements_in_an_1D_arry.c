// Write a C program to find the sum of all elements of an 1D array

#include<stdio.h>
int main() {
    int arr[5] = {2,3,1,4,5};
    int i, sum=0;

    for(i=0; i<5; i++){
        sum += arr[i];
    }
    printf("SUm of an array elements is : %d", sum);
    return 0;
}