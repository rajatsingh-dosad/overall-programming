
#include<stdio.h>

void main() {

	int inte,f,c;
	printf("Enter the size of Integer array: \n");
	scanf("%d",&inte);

	int iArr[inte];
	printf("Size of Integer array is %ld\n",sizeof(iArr));
	printf("Address of Integer array is %p\n",&iArr);
	printf("Enter the array elements: ");
	for(int i=0; i<inte; i++) {

		scanf("%d",&iArr[i]);
	}
	printf("\nPrinting elements in Integer Array: ");
	for(int i=0; i<inte; i++) {

		printf("%d ",iArr[i]);
	}
	
	printf("\n\nEnter the size of float array: \n");
	scanf("%d",&f);

	float fArr[f];
	printf("Size of Float array is %ld\n",sizeof(fArr));
	printf("Address of Float array is %p\n",&fArr);
	printf("Enter the array elements: ");
	for(int i=0; i<f; i++) {

		scanf("%f",&fArr[i]);
	}
	printf("\nPrinting elements in Float Array : ");
	for(int i=0; i<f; i++) {

		printf("%f ",fArr[i]);
	}


	printf("\n\nEnter the size of Character array: \n");
	scanf("%d",&c);

	char cArr[c];
	printf("Size of Character array is %ld\n",sizeof(cArr));
	printf("Address of Character array is %p\n",&cArr);
	printf("Enter the array elements: ");
	for(int i=0; i<c; i++) {

		scanf(" %c",&cArr[i]);
	}
	printf("\nPrinting elements in Character array : ");
	for(int i=0; i<c; i++) {

		printf("%c ",cArr[i]);
	}
}


	
