//5.2 Replace odd element of metrix with zero


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
	//print original matrix
	printf("Original Matrix:\n");
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	//replacing odd element with 0
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			if(mat[i][j]%2!=0){
				mat[i][j] = 0;
			}
		}
	}
	
	//print Updated matrix
	printf("Updated Matrix:\n");
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
}