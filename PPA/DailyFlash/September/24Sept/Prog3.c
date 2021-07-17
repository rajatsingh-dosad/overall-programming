
#include<stdio.h>

void main() {

	const int i = 10;
	
	int j = 20;
	
	int const *ptr	= &i;
	
	printf("ptr:%d\n",*ptr);
	
	*ptr = 100;	//error
	
	ptr = &j;
	
	printf("ptr:%d\n",*ptr);
}
	
