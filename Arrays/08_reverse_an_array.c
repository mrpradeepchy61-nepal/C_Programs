// Write a program to reverse an element of an array

#include<stdio.h>
int main () {
    int arr[5] = {1,5,3,7,6};
    int i;
    printf("Original Array: \n");
    for(i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

    printf("\nReversed array: \n");
    for(i=4; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}