
#include<stdio.h>

void main() {

	int arr1[] = {10,20,30,40,50};
	int arr2[] = {60,70,80,90,100};

	printf("%p\n",arr1);		//200
	printf("%p\n",&arr1);		//200


	int *xptr = arr1 +1;
	printf("%p\n",xptr);		//204
	
	int *yptr = &arr1 +1;
	printf("%p\n",yptr);		//220
	
	printf("%d\n",*xptr);		//220
	printf("%d\n",*yptr);		//220
}
