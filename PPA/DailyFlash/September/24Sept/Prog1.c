
#include<stdio.h>

void main() {

	int a = 10;
	int *iptr = &a;

	printf("Value of variable = %d\n",a);
	
	*iptr = 20;
	
	printf("Value of variable = %d\n",a);

	printf("Size of variable = %ld\n",sizeof(a));
	printf("Size of pointer = %ld\n",sizeof(iptr));
}
