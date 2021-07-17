
#include<stdio.h>

void main() {

	int x = 10;

	int *ptr = &x;

	int **pptr = &ptr;
		
	printf("%p\n",ptr);	//100
	
	printf("%p\n",pptr);	//104

	printf("%ld\n",sizeof(ptr));	//8
	
	printf("%ld\n",sizeof(pptr));	//8
}
