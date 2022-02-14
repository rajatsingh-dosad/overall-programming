
#include<stdio.h>
#include<stdlib.h>

void main() {

	int *iptr1 = (int*)malloc(3 * sizeof(int));
	int x = 10;

	for(int i=0;i<=2;i++) {

		*(iptr1+i) = x;
		x = x + 10;
	}

	for(int i=0;i<=2;i++) {

		printf("%d\n",*(iptr1+i));
	}

	iptr1 = realloc(iptr1 , 2*sizeof(int));	//iptr1 is pointing to first element

	for(int i=3;i<=4;i++) {
		
		*(iptr1+i) = x;
		x = x + 10;
	}

	for(int i=0;i<5;i++) {

		printf("%d\n",*(iptr1+i));
	}
}
