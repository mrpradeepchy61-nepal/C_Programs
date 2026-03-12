// Write a program to calculate the sum of each column.

#include<stdio.h>
int main(){
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

    //print matrix
    printf("Matrix is: \n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // calculate sum of each columns
    for(j=0; j<cols; j++){
        int sum = 0;
        for(i=0; i<rows; i++){
            sum += mat[i][j];
        }
        printf("Sum of %d column is: %d\n", j+1, sum);
    }

    return 0;
}