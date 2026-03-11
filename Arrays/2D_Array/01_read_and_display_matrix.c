// Write a C program to read a matrix of size m × n and display it. 

#include<stdio.h>
int main(){
    int i, j,m,n;
    printf("Enter order of matrix: ");
    scanf("%d%d",&m,&n);

    int matrix[m][n];

// read elements of an array
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Enter the elements of an array: ");
            scanf("%d", &matrix[i][j]);
        }
    }

    //to print the array
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }       

    return 0;

}