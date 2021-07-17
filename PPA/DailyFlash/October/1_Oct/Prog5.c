
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of arrays: ");
	scanf("%d",&n);

	int arr1[n];
	int arr2[n];
	int arr3[n];

	int *ptr1 = &arr1[0];
	int *ptr2 = &arr2[0];
	int *ptr3 = &arr3[0];

	printf("Enter the elements in array1: ");
	for(int i=0;i<n;i++) {

		scanf("%d",ptr1);
		ptr1++;
	}
	
	printf("Enter the elements in array2: ");
	for(int i=0;i<n;i++) {

		scanf("%d",ptr2);
		ptr2++;
	}

	
	ptr1 = &arr1[0];
	ptr2 = &arr2[0];

	for(int i=0;i<n;i++) {
		
		*ptr3 = (*ptr1) + (*ptr2);
		ptr1++;
		ptr2++;
		ptr3++;
	}
	
	ptr3  = arr3;
	printf("Printing array 3:\n");
	for(int i=0;i<n;i++) {
		
		printf("%d\n",*ptr3);
		ptr3++;
	}
	
}
