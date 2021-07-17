
#include<stdio.h>

void main() {
	
	int row,col;
	printf("Enter the numbers of rows and columns: ");
	scanf("%d%d",&row,&col);

	int arr[row][col];

	printf("Enter the elements in an array: ");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			scanf("%d",&arr[i][j]);
		}
	}
	
	int sum;
	for(int i=0;i<row;i++) {
		sum = 0;
		for(int j=0;j<col;j++) {

			printf("%d ",arr[i][j]);
			sum = sum + arr[i][j];
		}
		printf("Addition is %d\n",sum);
	}
}
