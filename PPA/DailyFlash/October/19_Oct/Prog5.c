
#include<stdio.h>

void main() {

	int row,col;
	printf("ENter the number of rows and columns of array: ");
	scanf("%d %d",&row,&col);

	int arr[row][col];

	printf("Enter the elements in an array:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			scanf("%d",&arr[i][j]);
		}
	}


	printf("\nOUTPUT:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			if(arr[i][j]%2==0)
				arr[i][j] = 0;
		}
		
	}
	printf("\nAfter replacing:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}





