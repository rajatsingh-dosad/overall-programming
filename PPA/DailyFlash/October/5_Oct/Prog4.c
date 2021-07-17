
#include<stdio.h>

void main() {

	int row, col;
	printf("Enter the row and col of array: ");
	scanf("%d%d",&row,&col);

	int arr[row][col];

	printf("Enter the elements in array: ");
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {

			scanf("%d",&arr[i][j]);
		}
	}
	
	int temp;
	int flag;
	printf("Output:\n");
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
		
		temp = arr[i][j];
		flag = 0;
		for(int k=2;k<temp;k++) {
			if(temp%k==0 )
				flag = 1;
		}
		if(flag==0 && temp!=1) 
			printf("%d ",temp);


			
		}
	}
	
	printf("\n");

}


