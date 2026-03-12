// Write a program to count even and odd numbers in a matrix. 

#include<stdio.h>
int main (){
    int i, j, rows, cols;
    printf("Enter the rows and columns of matrix: ");
    scanf("%d%d", &rows, &cols);
    int mat[rows][cols];

    //read elements of matrix
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("Enter the elements of a matrix: ");
            scanf("%d", &mat[i][j]);
        }
    }

    //count odd and even
    int evenCount=0, oddCount=0;

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            if(mat[i][j]%2==0){
                evenCount++;
            }
            else{
                oddCount++;
            }
        }
    }

    printf("Even count is: %d\n", evenCount);
    printf("Odd count is: %d\n", oddCount);

    return 0;
}