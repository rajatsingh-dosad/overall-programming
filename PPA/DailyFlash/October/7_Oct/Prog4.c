
#include<stdio.h>

void main() {

	int row,col;
	printf("Enter the size of rows and col: ");
	scanf("%d%d",&row,&col);

	int arr1[row][col];
	int arr2[row][col];
	int arr3[row][col];

	printf("Enter the elements in array1:\n");
	for(int i=0;i<row;i++)  {

		for(int j=0;j<col;j++) {

			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("Enter the elements in array2:\n");
	for(int i=0;i<row;i++)  {

		for(int j=0;j<col;j++) {

			scanf("%d",&arr2[i][j]);
		}
	}
	
	for(int k = 0;k<row;k++) {
		for(int i=0;i<row;i++) {
			arr3[k][i]=0;
			for(int j=0;j<col;j++) {
			arr3[k][i] +=   (arr1[k][j] * arr2[j][i]);
			}
		}
	}
	
	
	printf("Output:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
}

				




