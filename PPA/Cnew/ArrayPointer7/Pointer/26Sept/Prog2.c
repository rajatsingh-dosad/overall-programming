
#include<stdio.h>

void main() {

	int arr[] = {10,20,30,40,50};

	int *iptr = &arr[3];

	int *result = --iptr;

	printf("%d %d\n",*iptr,*result);	//30 30

	result = iptr--;
	
	printf("%d %d\n",*iptr,*result);	//20 30
}

	

