// Write a C program to find the largest element in an array

#include<stdio.h>
int main(){
    int n;

    printf("Enter the number of element in an array: ");
    scanf("%d",&n);

    int arr[n], i;

    for(i=0; i<n; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    for(i=0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    printf("Largest element in an array is: %d", largest);

    return 0;
}