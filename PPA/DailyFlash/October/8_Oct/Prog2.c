
#include<stdio.h>

void main() {

	int size ;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	int arr[size];
	int *ptr = arr;

	printf("Enter the elements in array:\n");
	for(int i=0;i<size;i++) {

		scanf("%d",&arr[i]);
	}
	int *arrptr[size];
	for(int i=0;i<size;i++) {

		arrptr[i] = ptr+i;
	}


	printf("Printing elements using Array of pointer:\n");
	for(int i=0;i<size;i++) {

		printf("%d\n",*(arrptr[i]));
	}
}
			
