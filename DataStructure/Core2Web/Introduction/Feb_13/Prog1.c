
#include <stdio.h>
//#include <stdlib.h>

void* malloc(size_t size);

void main() {

	void *vptr = malloc(sizeof(int));

	int *iptr = (int *)vptr;

	*iptr = 20;

	printf("%d\n",*iptr);

	//printf("%d\n",*vptr);	//error
}
