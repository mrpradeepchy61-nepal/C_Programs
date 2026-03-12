// Write a program to find the sum of all elements in a matrix.

#include<stdio.h>
int main(){
    int i,j, sum = 0;
    int rows, cols;
    printf("Enter the rows and columns of a matrix: ");
    scanf("%d%d", &rows, &cols);
    int mat[rows][cols];

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("Enter the elements of matrix: ");
            scanf("%d", &mat[i][j]);
        }
    }

    //calculate sum
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            sum += mat[i][j];
        }
    }

    //print matrix
    printf("Matrix is: \n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }

    printf("Sum of matrix is: %d",sum);

    return 0;
}