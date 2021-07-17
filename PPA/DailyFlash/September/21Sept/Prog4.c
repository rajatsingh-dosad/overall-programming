
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];
	printf("Array elements: ");
	for(int i=0;i<n;i++) {

		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n/2;i++) {

		int temp = arr[n-1-i];
		arr[n-1-i] = arr[i];
		arr[i] = temp;
	}
	
	printf("Output: ");
	for(int i=0; i<n;i++) {

		printf("%d ",arr[i]);
	}
	printf("\n");
}
