
#include<stdio.h>

int row,col;
void SumofRow(int (*ptr1)[col], int *ptr2) {
	
	printf("In function\n");
	int sum;
	for(int i=0;i<row;i++) {
		sum = 0;
		for(int j=0;j<col;j++) {

			printf("%d ",ptr1[i][j]);
			sum = sum + ptr1[i][j];
		}
		printf("\n");
		*(ptr2+i) = sum;
	}
}

void main() {

	printf("Enter the number of rows and columns of 2d array: ");
	scanf("%d %d",&row,&col);

	int arr2d[row][col];
	int arr1d[row];

	printf("Enter the elements in an 2d array: ");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			scanf("%d",&arr2d[i][j]);
		}
	}


	SumofRow(arr2d,arr1d);

	printf("\nIn main\n");
	for(int i=0;i<row;i++) {

		printf("%d ",arr1d[i]);
	}
	printf("\n");
}
