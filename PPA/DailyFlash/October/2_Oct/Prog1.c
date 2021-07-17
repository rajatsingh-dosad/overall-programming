
#include<stdio.h>

void main() {

	int m,n;
	printf("Enter the size of array1: ");
	scanf("%d",&m);

	printf("Enter the size of array2: ");
	scanf("%d",&n);

	if(m!=n)
		printf("\nLength is not same to perform addition operation.\n");
	else {	
		int arr1[m];
		int arr2[n];
		int arr3[n];
		int *ptr1 = arr1;
		int *ptr2 = arr2;
		int *ptr3 = arr3;
		
		printf("\nEnter the elements in array1: ");
		for(int i=0;i<m;i++) {

			scanf("%d",&arr1[i]);
		}
		
		printf("\nEnter the elements in array2: ");
		for(int i=0;i<n;i++) {

			scanf("%d",&arr2[i]);
		}

		for(int i=0;i<m;i++) {

			*(ptr3+i) = *(ptr1+i) + *(ptr2+i);
		}

		ptr3  = arr3;
		printf("Addition of two array : ");
		for(int i=0;i<n;i++) {

			printf("%d ",*(ptr3+i));
		}
		printf("\n");
	}
}





	
	
