
#include<stdio.h>

void main() {

	int row,col;
	printf("Enter the row and column of array: ");
	scanf("%d %d",&row,&col);

	double arr[row][col];
	double (*ptr)[row][col] = &arr;

	printf("Enter the elements in the array:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			scanf("%lf",&arr[i][j]);
		}
	}
	
	printf("\nOUTPUT:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			printf("%.2lf ",*(*(*(ptr+0)+i)+j));
		}
		printf("\n");
	}
}


