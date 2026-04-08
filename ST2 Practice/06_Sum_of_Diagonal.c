
// Diagonal sum

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
	
	int sum = 0;
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			if(i==j){
				sum += mat[i][j];
			}
		}
	}
	printf("Diagonal Sum: %d", sum);
	return 0;
}