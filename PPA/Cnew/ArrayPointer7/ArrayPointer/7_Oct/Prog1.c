
#include<stdio.h>

void main() {

	int a=10, b=20, c=30;
	
	int *ptr1 = &a;
	int *ptr2 = &b;
	int *ptr3 = &c;

	int* arrptr[] = {ptr1,ptr2,ptr3};
	
	//Addresses
	printf("%p\n",arrptr[0]);	//700
	printf("%p\n",arrptr[1]);	//708
	printf("%p\n",arrptr[2]);	//716
	
	printf("%d\n",*arrptr[0]);	//10
	printf("%d\n",*arrptr[1]);	//20
	printf("%d\n",*arrptr[2]);	//30
	
	printf("%d\n",*(*(arrptr+0)));	//10
	printf("%d\n",*(*(arrptr+1)));	//20
	printf("%d\n",*(*(arrptr+2)));	//30

}
