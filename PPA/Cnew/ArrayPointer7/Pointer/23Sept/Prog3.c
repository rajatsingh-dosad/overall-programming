
#include<stdio.h>

void main() {

	int arr[7] = {10,20,30,40,50,60,70};

	int *iptr = arr;

	printf("%d\n",*iptr);	//10

	iptr = iptr + 1;

	printf("%d\n",*iptr);	//20

	iptr = iptr +3 ;
	
	printf("%d\n",*iptr);	//50


}
