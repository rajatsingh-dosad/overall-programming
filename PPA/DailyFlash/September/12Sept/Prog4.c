

#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];

	for(int i=0; i<n; i++) {

		scanf("%d",&arr[i]);
	}

	printf("Printing array Elements: \n");
	for(int i=0; i<n; i++) {

		printf("%d ",arr[i]);
	}
	printf("\n");
}
