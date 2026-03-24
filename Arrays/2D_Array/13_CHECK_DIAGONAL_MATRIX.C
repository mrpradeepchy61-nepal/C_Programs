//Write a program to check whether a matrix is diagonal. 

#include<stdio.h>
int main(){
    int rows, cols, i, j;
    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);

    int mat[rows][cols];

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("Enter matrix: ");
            scanf("%d", &mat[i][j]);
        }
    }

    int isDaigonal = 1;
    //condition check
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            if(i != j && mat[i][j] !=0){
                isDaigonal = 0;
                break;
            }
        }
    }

    if(isDaigonal){
        printf("Matrix is Diagonal");
    }
    else{
        printf("Matrix is not Diagonal");
    }
    return 0;
}