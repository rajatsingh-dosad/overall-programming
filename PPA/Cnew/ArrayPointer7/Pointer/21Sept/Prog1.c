
#include<stdio.h>

void main() {
	
	int a=10, b=20;
	int *iptr= 0 ;

	iptr = &a;

	printf("%p\n",iptr);
	printf("%d\n",*iptr);	//10

	iptr = &b;
	
	printf("%p\n",iptr);
	printf("%d\n",*iptr);	//20
}
