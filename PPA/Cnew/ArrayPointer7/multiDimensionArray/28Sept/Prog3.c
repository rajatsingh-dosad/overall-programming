
#include<stdio.h>

void main() {

	int arr1[] = {10,20,30,40,50};
	int arr2[] = {'a','b','c'};
	float arr3[] = {10.5,20.5,30.5};
	double arr4[] = {10.5,20.5,30.5,40.5,90.5};
	
	int *iptr1 = arr1;
	int *iptr2 = &arr2;
	float *iptr3 = arr3;
	float *iptr4 = arr4;
	
	printf("%p\n",iptr1);
	printf("%p\n",iptr2);
	printf("%p\n",iptr3);
	printf("%p\n",iptr4);
}
