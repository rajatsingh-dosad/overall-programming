
#include<stdio.h>

void main() {

	int arr[] = {10,20,30,40,50};
	
	int *iptr1 = &arr[1];
	int *iptr2 = &arr[2];

	int *ansptr = iptr1 + iptr2;	//Error

	printf("%d\n",*ansptr);
}

