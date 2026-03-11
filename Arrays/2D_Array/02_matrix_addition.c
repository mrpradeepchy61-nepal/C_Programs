// Write a program to add two matrices of the same size.

#include<stdio.h>
int main(){
    int i,j;
    int a[4][4], b[4][4], c[4][4];

//Read matrix of a
    printf("\n----Matrix A----\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Enter the element of a matrix: ");
            scanf("%d", &a[i][j]);
        }
    }

// Read matrix b
    printf("\n----Matrix B----\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Enter the element of a matrix: ");
            scanf("%d", &b[i][j]);
        }
    }

// add matrix a and b
    
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

// print matrix A
    printf("\n----Matrix A----\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

// print matrix B
    printf("\n----Matrix B----\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
// print resultant matrix
    printf("\n----Resultant matrix----\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}