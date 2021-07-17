

#include<stdio.h>

void main() {
	
	int row;
	printf("Enter the number of rows: ");
	scanf("%d",&row);

	for(int i=1; i<=row; i++) {
		
		int num=1;
		for(int j=1; j<=row; j++) {

			printf("%d ",num);
			num++;
		}
		printf("\n");

	}
}



