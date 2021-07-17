
#include<stdio.h>

void main() {

	int a =10;
	int b =20;
	
	int *iptr = &a;

	printf("%p\n",&a);	//100
	printf("%p\n",&b);	//104
	printf("%p\n",&iptr);	//108
}
