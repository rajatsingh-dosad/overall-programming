
#include<stdio.h>

void main() {

	float farr[] = {20.5,30.5,40.5,50.5,60.5};
	
	float *fptr = farr;

	printf("%f\n",*fptr);  //20.5
	
	fptr = fptr + 2.5f;
	
	printf("%f\n",*fptr);	//30.5
}
