////Write a program to check if a matrix is lower triangular.

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
    int isLower = 0;
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            if(i<j && mat[i][j]==0){
                isLower = 1;
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

    if(isLower){
        printf("Matrix is Lower Triangular matrix");
    }
    else{
        printf("Matrix is not Lower triangular matrix");
    }

    return 0;
}