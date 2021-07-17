
#include<stdio.h>

void main() {

	int a=10;

	const int *iptr = &a;

	printf("%d\n",a);
	printf("%d\n",*iptr);
	
	a = 20;
	//*iptr = 20;	//error
	
	printf("%d\n",a);
	printf("%d\n",*iptr);
}
