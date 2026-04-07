/*
	Write a C program to calculate the average temperature for each city(row-wise)
*/

#include<stdio.h>
int main(){
	int rows, cols;
	printf("Enter rows and columns: ");
	scanf("%d%d", &rows, &cols);
	
	int mat[rows][cols];
	int i, j;
	
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			printf("Enter matrix elements: ");
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0; i<rows; i++){
		float sum = 0;
		float avg = 0;
		for(j=0; j<cols; j++){
			sum += mat[i][j];
		}
		avg = sum/cols;
		printf("Row %d Average = %.2f\n", i+1, avg);
	}
	return 0;
}