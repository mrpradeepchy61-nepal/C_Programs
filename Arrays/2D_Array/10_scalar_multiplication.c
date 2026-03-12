// Multiply every element of a matrix by a constant number.

#include<stdio.h>
int main(){
    int i, j, rows, cols, constant;
    printf("Enter the rows and columns of matrix: ");
    scanf("%d%d", &rows, &cols);
    int mat[rows][cols], scalarMat[rows][cols];

    //read elements of matrix
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("Enter the elements of a matrix: ");
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Enter the constant: ");
    scanf("%d", &constant);

    //multiply matrix by constant
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scalarMat[i][j] = constant * mat[i][j];
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
    //print resultant matrix
    printf("\nResultant matrix\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ", scalarMat[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}