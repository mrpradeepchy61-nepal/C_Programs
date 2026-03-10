// Write a C programs to read 10 integers into an array and idsplay them.

#include<stdio.h>
int main() {
    int n = 10;
    int arr[n], i;

    for(i=0; i<n; i++){
        printf("Enter the %d element: ", i+1);
        scanf("%d",&arr[i]);
    }
    
    //to print elements of an array
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}