
#include<stdio.h>

void main() {

	int row, col,max = 0;
	printf("Enter the row and col of array: ");
	scanf("%d%d",&row,&col);

	int arr[row][col];

	printf("Enter the elements in array: ");
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {

			scanf("%d",&arr[i][j]);
		}
	}

	printf("Output:\n");
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {

			printf("%d ",arr[i][j]);
			if(arr[i][j] > max)
				max = arr[i][j];
		}
		printf("\n");
	}

	printf("Biggest number in array is %d\n",max);
}


