
#include<stdio.h>

void main() {

	int size;
	printf("Enter the array size: ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the elements in array: ");
	for(int i=0;i<size;i++) {

		scanf("%d",&arr[i]);
	}

	int *ptr = &arr[0];
	printf("Array in forward order: [ ");
	for(int j=0;j<size;j++) {
		printf("%d ",*ptr++);
	}
	printf("]\n");
	
	int *ptr1 = &arr[size-1];
	printf("\nArray in backward order: [ ");
	for(int j=0;j<size;j++) {
		printf("%d ",*ptr1--);
	}
	printf("]\n");
}
