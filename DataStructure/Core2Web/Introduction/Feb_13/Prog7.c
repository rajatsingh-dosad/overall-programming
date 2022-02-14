
#include <stdio.h>
#include <stdlib.h>

void main() {

	void *vptr = malloc(3 * sizeof(int));
	int *iptr = (int*)vptr;
	
	*iptr = 20;

	printf("%d\n",*iptr);	//20

	free(iptr);
	
	printf("%d\n",*iptr);	//0

}
