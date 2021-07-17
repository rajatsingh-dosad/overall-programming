
#include<stdio.h>

void main() {

	int row,col;
	printf("Enter the size of row and col: ");
	scanf("%d%d",&row,&col);

	int arr1[row][col];
	int arr2[row][col];
	int arr3[row][col];


	printf("Enter the elements in array1:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("Enter the elements in array2:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			scanf("%d",&arr2[i][j]);
		}
	}

	
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {
			
			*(*(arr3+i)+j) = *(*(arr2+i)+j) + *(*(arr1+i)+j);
		}
	}
	
	
	printf("Elements in third array are:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {
			
			printf("%d ",*(*(arr3+i)+j));
		}
		printf("\n");
	}
}




