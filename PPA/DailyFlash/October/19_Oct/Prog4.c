
#include<stdio.h>

void passArr(int x) {

	if(x%2!=0)
		printf("%d ",x);
}
void main() {

	int arr[3][3];
	int (*ptr)[3][3] = &arr;

	printf("Enter the elements in an array: ");
	for(int i=0;i<3;i++) {

		for(int j=0;j<3;j++) {

			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\nPrinting elements of array:\n");
	for(int i=0;i<3;i++) {

		for(int j=0;j<3;j++) {

			printf("%d ",ptr[0][i][j]);
		}
		printf("\n");
	}

	printf("Odd Numbers: ");
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++)

			passArr(arr[i][j]);
	}
	printf("\n");
}



	
	
