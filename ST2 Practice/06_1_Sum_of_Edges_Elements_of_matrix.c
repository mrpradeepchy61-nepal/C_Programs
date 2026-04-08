//6.1 SUm of Edges Elements

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
			if(i==0 || i==rows-1 || j==0 || j==cols-1){
                sum += mat[i][j];
            }
		}
	}
	
	printf("Sum of Edges elements: %d", sum);
	
}