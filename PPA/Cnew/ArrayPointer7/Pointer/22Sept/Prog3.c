
#include<stdio.h>

void main() {

	const int a=10;
	const int *iptr = &a;
	int *iptr2 = &a;

	printf("%d\n",a);		//10
	printf("%d\n",*iptr);		//10
	printf("%d\n",*iptr2);		//10

	*iptr2 = 20;

	printf("%d\n",a);		//20
	printf("%d\n",*iptr);		//20
	printf("%d\n",*iptr2);		//20
}


