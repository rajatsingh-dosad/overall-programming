

#include<stdio.h>

void main() {

	int row = 0;
	int column =0;
	printf("Enter the rows and colums: ");
	scanf("%d%d",&row,&column);
	
	int x=row;
	for(int i=1; i<=row; i++) {
		
		
		for(int j =column; j>=i; j--) {

			printf("%d ",x*x);
		
		}
		x--;
		
		printf("\n");
	}
}
