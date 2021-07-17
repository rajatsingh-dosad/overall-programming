
#include<stdio.h>

void main() {

	const int a=10;

	int b=20;

	int *const iptr=&a;
	
	*iptr = 50;

	printf("%d\n",*iptr);
}
