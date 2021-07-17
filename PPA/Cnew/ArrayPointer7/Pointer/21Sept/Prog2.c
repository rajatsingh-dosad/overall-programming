
#include<stdio.h>

void main() {
	
	int a=10, b=20;
	int *iptr= 0 ;

	iptr = &a;

	printf("%p\n",iptr);
	printf("%d\n",*iptr);	//10

	a = 13;
	printf("%d\n",*iptr);	//13

	*iptr = 15;
	printf("%d\n",*iptr);	//15


}
