
#include<stdio.h>

void main() {

	int row,col;

	printf("Enter the row and col of arraY: ");
	scanf("%d%d",&row,&col);

	int arr[row][col];

	printf("Enter the elements in array: ");
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {

			scanf("%d",&arr[i][j]);
		}
	}
	int temp;
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			
			temp = arr[i][col-1];
			arr[i][col-1] = arr[i][0];
			arr[i][0]= temp;
			
		}
	}

	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			
			printf("%d ",arr[i][j]);	
		}
		printf("\n");
	}
}
	

	
