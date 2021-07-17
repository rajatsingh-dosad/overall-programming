
#include<stdio.h>

void main() {

	int arr[] = {10,20,30,40,50};

	int *ptr1 = arr;
	int *ptr2 = &arr;

	printf("%p\n",ptr1);	//100
	printf("%p\n",ptr2);	//100

	ptr1++;
	ptr2++;

	printf("%p\n",ptr1);	//104
	printf("%p\n",ptr2);	//104
	
}
