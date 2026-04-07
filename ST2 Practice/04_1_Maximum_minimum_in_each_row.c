// Maximum and Minimum in each row

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
		int max = mat[i][0];
		for(j=1; j<cols; j++){
			if(mat[i][j]>max){
				max = mat[i][j];
			}
		}
		printf("Maxixum element in %d row: %d\n", i+1, max);
	}
	
	for(i=0; i<rows; i++){
		int min = mat[i][0];
		for(j=1; j<cols; j++){
			if(mat[i][j]<min){
				min = mat[i][j];
			}
		}
		printf("Minimum element in %d row: %d\n", i+1, min);
	}
	return 0;
}