
#include<stdio.h>

void main() {

	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	char carr1[size];
	char carr2[size];
	void* vptr1[size];
	void* vptr2[size];
	printf("Enter the elements in array1: ");
	for(int i=0;i<size;i++) {

		scanf(" %c",&carr1[i]);
		vptr1[i] = &carr1[i];
	}
	
	printf("Enter the elements in array2:");
	for(int i=0;i<size;i++) {

		scanf(" %c",&carr2[i]);
		vptr2[i] = &carr2[i];
	}

	printf("Printing elements in array1: " );
	for(int i=0;i<size;i++) {

		printf("%c",*(char *)vptr1[i]);
	}
	
	printf("\nPrinting elements in array2: " );
	for(int i=0;i<size;i++) {

		printf("%c",*(char *)vptr2[i]);
	}
	printf("\n");
}



