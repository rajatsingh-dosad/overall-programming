
#include<stdio.h>

void main() {

	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	char carr[size];
	void *ptr[size];

	printf("Enter the elements in an array:\n");
	for(int i=0;i<size;i++) {
		
		scanf(" %c",&carr[i]);
		ptr[i] = &carr[i];
	}
	
	for(int i=0;i<size;i++) {
		
		printf("%c",*(char *)ptr[i]);
	}

	printf("\n");
	
}


