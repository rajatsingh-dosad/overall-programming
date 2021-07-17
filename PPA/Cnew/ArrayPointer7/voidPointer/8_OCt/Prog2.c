
#include<stdio.h>

void main() {
	
	int x = 10;
	float y = 20.5;
	
	void *vptr = 0;
	
	vptr = &x;

	printf("%d\n",*(int *)vptr);	//10
}
