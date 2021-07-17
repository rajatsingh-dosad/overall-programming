
#include<stdio.h>

void main() {

	int arr1[] = {10,20,30,40,50};
	int arr2[] = {60,70,80,90,100};

	int (*ptr)[5] = &arr1;

	printf("%p\n",ptr);

	ptr++;

	printf("%p\n",ptr);
}

