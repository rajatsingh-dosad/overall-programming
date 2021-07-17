
#include<stdio.h>

void main() {

	int arr1[] = {10,20,30,40,50};
	int arr2[] = {60,70,80};

	int *iptr1 = arr1 + 1  ;
	printf("%d\n",*iptr1);		//20
	
	iptr1 = iptr1 + 1;
	printf("%d\n",*iptr1);		//30
	
}
