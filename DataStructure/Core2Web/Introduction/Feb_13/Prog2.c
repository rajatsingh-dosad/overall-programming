
#include <stdio.h>

void main() {

	int arr[] = {10,20,30,40};

	int *iptr = arr;

	printf("%d\n",*iptr);	//10

	iptr++;			//iptr = iptr + 1 * sizeof(DTP)

	printf("%d\n",*iptr);	//20

	iptr = iptr + 3;

	printf("%d\n",*iptr);	//Garbage value
}
