
#include<stdio.h>

void sub(int x,int y) {
	
	printf("%d\n",x-y);
}

void main()  {

	void (*fptr)(int,int) = 0;

	fptr = sub;

	fptr(20,10);
}


