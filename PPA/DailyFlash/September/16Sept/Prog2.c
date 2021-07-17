
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr1[n];
	int arr2[n];

	for(int i=0;i<n;i++) {

		scanf("%d",&arr1[i]);
	}

	for(int i=0; i<n; i++) {

		arr2[i] = &arr1[i];
	}

	for(int i=0; i<n; i++) {

		printf("%d ",arr2[i]);
	}
	printf("\n");
}
