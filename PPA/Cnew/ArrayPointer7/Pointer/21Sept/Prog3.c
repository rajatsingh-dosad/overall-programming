
#include<stdio.h>

void main() {

	int a=10;

	int *iptr1 = &a;
	int *iptr2 = &a;

	printf("%d\n",*iptr1);	//10
	printf("%d\n",*iptr2);	//10

	*iptr2 = 11;
	
	printf("%d\n",*iptr1);	//11
	printf("%d\n",*iptr2);	//11











































}
