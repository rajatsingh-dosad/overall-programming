
#include<stdio.h>

void main() {

	int arr[] = {10,20,30,40,50,60,70};

	int *iptr1 = &arr[0];
	int *iptr2 = &arr[6];

	printf("%d\n",*iptr1);	//10
	printf("%d\n",*iptr2);	//70

	int *a = iptr1 - iptr2;

	printf("%d\n",*a);	//-6
}

