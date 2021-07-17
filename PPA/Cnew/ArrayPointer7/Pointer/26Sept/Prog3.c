
#include<stdio.h>

void main() {

	float arr[] = {10.5,20.5,30.5,40.5,30.5};

	float *fptr1 = &arr[2]; 
	
	float *fptr2 = &arr[4]; 

	int a = fptr1 == fptr2;
	printf("%d\n",a);	//0
	
	a = fptr1 != fptr2;
	printf("%d\n",a);	//1
	
	a = fptr1 >= fptr2;
	printf("%d\n",a);	//0

	a = fptr1 <= fptr2;
	printf("%d\n",a);	//1
	
	a = *fptr1 == *fptr2;
	printf("%d\n",a);	//1
}
