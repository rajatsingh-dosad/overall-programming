
#include<stdio.h>

void main() {

	int a = 10;
	int b = 20;
	int c = 30;

	int *ptr1 = &a;
	int *ptr2 = &b;
	int *ptr3 = &c;

	int* parr[3] = {ptr1,ptr2,ptr3};

}
