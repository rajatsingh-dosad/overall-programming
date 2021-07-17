
#include<stdio.h>

void main() {

	int x = 10;		//200
	
	int *ptr = &x;


	void *vptr = NULL;
	
	vptr = &x;

	printf("%p\n",ptr);	//200
	printf("%p\n",vptr);	//200
	
	printf("%d\n",*ptr);	//200
	printf("%d\n",*(int *)vptr);	//200
}
