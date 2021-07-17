
#include<stdio.h>

void main() {

	int a = 10;
	int *iptr = &a;

	printf("%p\n",iptr);	//100

	iptr = iptr + 2;
	printf("%p\n",iptr);	//100+2*(sizeof datatype of pointer) = 100+2*4 = 108
	
	iptr = iptr + 3;
	printf("%p\n",iptr);	//108+3*(sizeof datatype of pointer) = 108+3*4 = 120

	iptr = iptr + 1;
	printf("%p\n",iptr);	//120+1*(sizeof datatype of pointer) = 120+1*4 = 124
}
