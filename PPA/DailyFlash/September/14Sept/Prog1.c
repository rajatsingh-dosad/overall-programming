
#include<stdio.h>

void main() {

	int arr[] = {10,20,30,40};

	int len = sizeof(arr) / sizeof(arr[0]);
	
	printf("The length of array is %d\n",len);

}


