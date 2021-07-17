
#include<stdio.h>

void main() {
	
	int row,col;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&row,&col);

	int arr[row][col];
	int trans[row][col];
	printf("Enter the elements in an array:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("Normal matrix:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {
			printf("%d ",arr[i][j]);
			trans[i][j] = arr[j][i];
		}
		printf("\n");
	}
	
	printf("Transpose matrix:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {
			
			printf("%d ",trans[i][j]);
		}
		printf("\n");
	}
}




