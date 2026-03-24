// Write a program to find the  sum of main diagonal elements 

#include<stdio.h>
int main(){
    int rows, cols, i, j;
    printf("Enter rows and columns of a matrix: ");
    scanf("%d%d", &rows, &cols);
    int mat[rows][cols];

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("Enter the matrix elements: ");
            scanf("%d", &mat[i][j]);
        }
    }

    int sum = 0;
    // condition check
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            if(i==j){
                sum += mat[i][j];
            }
        }
    }

    //to print the matrix
    printf("Diagonal matrix\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Sum of diagonal elements is: %d", sum);

    return 0;

}