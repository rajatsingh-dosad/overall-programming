
// Use malloc(), calloc(), realloc() and free() in the same code


#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int *iptr1 = (int*)malloc(3 *sizeof(int));

	for(int i=0;i<3;i++) {

		*(iptr1+i) = i+1;
	}

	int *iptr2 = (int*)calloc(2,sizeof(int));
	
	for(int i=0;i<2;i++) {

		*(iptr2+i) = i+11;
	}

	int *iptr3 = realloc(iptr1,3*sizeof(int));

	for(int i=3;i<6;i++) {

		*(iptr3+i) = i+18;
	}

	
	//Printing code for malloc
	for(int i=0;i<3;i++) {

		printf("%d ",*(iptr1+i));
	}
	
	
	
	printf("\n");

	//Printing code for calloc
	for(int i=0;i<2;i++) {

		printf("%d ",*(iptr2+i));
	}
	
	printf("\n");

	//Printing code for realloc
	for(int i=0;i<6;i++) {

		printf("%d ",*(iptr3+i));
	}

	printf("\n");
	
	free(iptr1);	//Since malloc and realloc pointer is same so freeing one will work for both
	iptr1 = NULL;
	iptr3 = NULL;

	free(iptr2);
	iptr2 = NULL;

}
