
#include<stdio.h>

void main() {
	
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	float farr[n];
	float *fptr = farr;
	float mul = 1;

	printf("Enter the elements in array: ");
	for(int i=0;i<n;i++) {

		scanf("%f",fptr);
		fptr++;
	}
	
	fptr =  farr;
	for(int i=0;i<n;i++) {

		if(i%2==0) {
			mul = mul * (*fptr);
		}
		fptr++;
	}

	printf("Multiplication of even indexes if %.2f\n",mul);
}




