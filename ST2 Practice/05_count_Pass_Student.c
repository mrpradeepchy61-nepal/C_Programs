/* Count Pass Students: Take 2D matrix rows- students, cols-subjects
	
*/

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
		int count=0;
		for(i=0; i<rows; i++){
			if(mat[i][j]>=40){
				count++;
			}
		}
		printf("Subject %d Pass Count = %d\n", j+1, count);
	}
	return 0;
}