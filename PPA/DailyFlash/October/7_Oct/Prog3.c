
#include<stdio.h>

void main() {

	int row , col;
	printf("Enter the size of rows and col: ");
	scanf("%d%d",&row,&col);

	int arr[row][col];

	printf("Enter the elements in array:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			scanf("%d",&arr[i][j]) ;

		}
	}

	printf("The address of the elements by using formula is:\n");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			printf("%p ",*(arr+i)+j);
		}
		printf("\n");
	}
}

/*
 	* ( arr + i ) + j  => 
	First it will check "(arr + i)" i.e (100 + 0*sizeof(whole 1d array)) => (100 + 0)
	and this *(100) will go the base address of row 0
	and further when we add 100+j it goes to  the address address of column
	
	 
*/
