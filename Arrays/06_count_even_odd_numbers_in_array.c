// Write a program to count even and odd numbers of an array

#include<stdio.h>
int main () {
     int n, evenCount=0, oddCount=0;

    printf("Enter the number of element in an array: ");
    scanf("%d",&n);

    int arr[n], i;

    for(i=0; i<n; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i]%2==0){
            evenCount += 1;
        }
        else{
            oddCount += 1;
        }
    }

    printf("Total Even numbers is: %d\n", evenCount);
    printf("Total odd count is: %d", oddCount);

    return 0;

}