
#include<stdio.h>

void main() {

	int x = 10;
	int b = 20;

	int *ptr = &x;
	
	int **pptr = &ptr;

	printf("%d\n",x);		//10

	printf("%d\n",*ptr);		//10

	printf("%p\n",&ptr);		//100

	printf("%p\n",pptr);		//100
}
