//5.1 Average columns wise

#include<stdio.h>
int main(){
	int rows, cols;
	printf("Enter rows and cols: ");
	scanf("%d%d", &rows, &cols);
	
	int mat[rows][cols];
	int i, j;
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			printf("Enter marks: ");
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(j=0; j<cols; j++){
		float sum = 0;
		float avg = 0;
		for(i=0; i<rows; i++){
			sum += mat[i][j];
			
		}
		avg = sum/rows;
		printf("Average in %d column = %.2f\n", j+1, avg);
	}
	return 0;
}