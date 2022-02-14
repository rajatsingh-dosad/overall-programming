
#include<stdio.h>
#include<stdlib.h>

void main() {

	void *vptr1 = malloc(3 * sizeof(int));
	int *iptr1 = (int*)vptr1;

	int x = 10;

	for(int i=0;i<=2;i++) {

		*iptr1 = x;
		x = x + 10;
		iptr1++;
	}

	iptr1 = (int*)vptr1;

	for(int i=0;i<=2;i++) {

		printf("%d\n",*iptr1);
		iptr1++;
	}
	
	iptr1 = (int*)vptr1;

	iptr1 = realloc(iptr1 , 2*sizeof(int));	//compulsory iptr1 should point to first element only otherwise we get segmentation fault, hence above line is very much important	
	iptr1 = iptr1 + 3;

	for(int i=0;i<=1;i++) {

		*iptr1 = x;
		x = x + 10;
		iptr1++;
	}

	iptr1 = (int*)vptr1;

	for(int i=0;i<5;i++) {

		printf("%d\n",*iptr1);
		iptr1++;
	}
}
