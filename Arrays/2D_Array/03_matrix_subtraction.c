// Write a program to subtract two matrices.

#include<stdio.h>
int main() {
    int i, j, r, c;
    printf("Enter the rows and coulmns of a matrix: ");
    scanf("%d%d", &r, &c);
    
    int A[r][c], B[r][c], C[r][c];

    //read matrix A
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Enter the element of matrix A: ");
            scanf("%d", &A[i][j]);
        }
    }
    //read matrix B
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Enter the element of matrix B: ");
            scanf("%d", &B[i][j]);
        }
    }

    //add matrix A and B
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
           C[i][j] = A[i][j] - B[i][j];
        }
    }

    //print matrix A
    printf("Matrix A\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    //print matrix B
     printf("\nMatrix B\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    //print resultant matrix;
    printf("\n Difference of matrix A and B\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}