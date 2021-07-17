
#include<stdio.h>

void main() {

	int arr[] = {10,20,30,40,50};

	int *iptr = &arr[2];

	iptr = 1 - iptr  ;

	printf("%d\n",*iptr);
}
