
#include<stdio.h>

void main() {

	int row,col;

	printf("Enter the row and col: ");
	scanf("%d%d",&row,&col);

	int arr[row][col],sum_dia = 0;
	int trans[row][col];

	printf("Enter the elements in array:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			scanf("%d",&arr[i][j]);
		}
	}

	printf("Main diagonal elements : [ ");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			if(i==j) {
				printf("%d ",arr[i][j]);
				sum_dia += arr[i][j];
			}

			trans[i][j] = arr[j][i];
		}
	}
	printf("]\n");

	printf("Main diagonal elements addition is: %d\n",sum_dia);

	printf("Transpose of matrix :\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			printf("%d ",trans[i][j]);
		}
		printf("\n");
	}
}
