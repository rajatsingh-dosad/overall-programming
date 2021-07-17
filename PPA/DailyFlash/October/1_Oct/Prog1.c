
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr1[n];
	int arr2[n];

	int *ptr = &arr1[0];

	printf("Enter enter the elements in array1 : ");
	for(int i=0;i<n;i++) {

		scanf("%d",&arr1[i]);
	}
	
	printf("Enter enter the elements in array2 : ");
	for(int i=0;i<n;i++) {

		scanf("%d",&arr2[i]);
	}

	printf("Printing elements in array1:\n ");
	for(int i=0;i<n;i++) {

		printf("arr1[%d] = %d and address is %p\n",i,*ptr,ptr);
		ptr+=1;
	}

	ptr = &arr2[0];
	
	printf("\nPrinting elements in array2:\n ");
	for(int i=0;i<n;i++) {

		printf("arr2[%d] = %d and address is %p\n",i,*ptr,ptr);
		ptr+=1;
	}
}

/* If pointer would be constant i.e int *const ptr = &arr1[0] than it would have given 
   as error because constant pointer cannot change its address once pointing to someone
*/
