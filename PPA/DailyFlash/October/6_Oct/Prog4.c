
#include<stdio.h>

void main() {

	int arr[3][3];

	printf("Enter the elements in array:\n");
	for(int i=0;i<3;i++) {

		for(int j=0;j<3;j++) {

			scanf("%d",&arr[i][j]);
		}
	}

	printf("Output: Square of Diagonal are: ");
	for(int i=0;i<3;i++) {

		for(int j=0;j<3;j++) {
			
			if(i==j)
				printf("%d ",arr[i][j] * arr[i][j]);
		}
	}
	printf("\n");
}
	
