// Write a program to find the transpose of a matrix.

#include<stdio.h>
int main(){
    int i, j, rows, cols, constant;
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

    //print original matrix
    printf("Original Matrix\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    //print transposed matrix
    printf("\n Transposed Matrix\n");
    for(i=0; i<cols; i++){
        for(j=0; j<rows; j++){
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }

    return 0;
}