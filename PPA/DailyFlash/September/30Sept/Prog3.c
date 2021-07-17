
#include<stdio.h>

void main() {

	int arr[] = {10,20,30,40,50,60,70,80,90,100};

	int *ptr = arr;

	printf("Printing elements normally: ");
	for(int i=0;i<10;i++) {

		printf("%d ",arr[i]);
	}

	printf("\n\nPrinting elements as i[arr]: ");
	for(int i=0;i<10;i++) {

		printf("%d ",i[arr]);
	}

	printf("\n\nPrinting elements as deferencing ");
	for(int i=0;i<10;i++) {

		printf("%d ",*ptr);
		ptr++;
	}
	printf("\n");
}

