
#include<stdio.h>

void main() {

	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;

	int *ptr1 = &a;
	int *ptr2 = &b;
	int *ptr3 = &c;
	int *ptr4 = &d;

	int* iptr[] = {ptr1,ptr2,ptr3,ptr4};
	printf("Size of elements of array:\n");
	for(int i=0;i<4;i++) {

		printf("%ld\n",sizeof(iptr[0]));
	}
}
