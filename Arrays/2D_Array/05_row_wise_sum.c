#include<stdio.h>
int main(){
    int i, j;
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7};

    // to print matrix
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    // sum of each rows
    for(i=0; i<4; i++){
        int sum = 0;
        for(j=0; j<4; j++){
            sum += arr[i][j];
        }
        printf("Sum of row %d is: %d\n", i+1, sum);
    }



    return 0;
}