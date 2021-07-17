
#include<stdio.h>

void main() {
	
	int size;
	printf("Enter the size of array:\n");
	scanf("%d",&size);

	float farr[size];
	void *fptr = farr;

	printf("Enter the elements in array:\n");
	for(int i=0;i<size;i++) {

		scanf("%f",&farr[i]);
	}

	printf("PRinting elements in array:\n");
	for(int i=0;i<size;i++)  {

		printf("%.2f\n",*((float *)fptr+i));
		
	}
}
