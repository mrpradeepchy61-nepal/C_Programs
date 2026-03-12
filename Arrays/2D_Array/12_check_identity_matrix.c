// Write a program to check whether a matrix is an identity matrix.

#include<stdio.h>
int main(){
    int i, j, rows, cols;
    printf("ENter rows and columns of matrix: ");
    scanf("%d%d", &rows, &cols);

    int mat[rows][cols];

    //read matrix
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("Enter the matrix elements: ");
            scanf("%d", &mat[i][j]);
        }
    }

    //print matrix
    printf("Original Matrix\n");
    for(i=0; i<rows; i++){
        for(j=0; j<rows; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // check identity

    int flag=1;
    if(rows != cols){
        flag = 0;
    }
    else{
        for(i=0; i<rows; i++){
            for(j=0; j<cols; j++){
                if(i==j && mat[i][j] != 1){
                    flag = 0;
                }
                
                if(i!=j && mat[i][j] != 0){
                    flag = 0;
                }
            }
        }
    }

    if(flag == 1){
        printf("\nThe matrix is an Identity Matrix");
    }
    else{
        printf("\nThe matrix is not an Identity Matrix");
    }

}