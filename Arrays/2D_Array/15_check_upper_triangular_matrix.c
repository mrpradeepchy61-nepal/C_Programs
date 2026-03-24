//Write a program to check if a matrix is upper triangular.

#include<stdio.h>
int main(){
    int rows, cols, i, j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d%d", &rows, &cols);
    int mat[rows][cols];

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("Enter matrix elements: ");
            scanf("%d", &mat[i][j]);
        }
    }

    //condition check;
    int isUpper = 0;
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            if(i>j && mat[i][j]==0){
                isUpper = 1;
                break;
            }
        }
    }

    //print matrix
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    if(isUpper){
        printf("Matrix is upper Triangular matrix");
    }
    else{
        printf("Matrix is not Upper triangular matrix");
    }

    return 0;
}