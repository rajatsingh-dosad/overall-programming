
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of  array: ");
	scanf("%d",&n);

	int arr1[n];
	int arr2[n];
	int *ptr1 = arr1;
	int *ptr2 = arr2;
	int num = 0;

	printf("Enter the elements in array1: ");
	for(int i=0;i<n;i++) {

		scanf("%d",ptr1+i);
		if(*(ptr1+i)%2!=0) {
			*(ptr2+num) = *(ptr1+i);
			num++;
		}
	}

	ptr1 = arr1;
	ptr2 = arr2;

	printf("First Array: ");
	for(int i=0;i<n;i++) {
		printf("%d ",*(ptr1+i));
	}

	printf("\nSecond Array: ");
	for(int i=0;i<num;i++) {
		printf("%d ",*(ptr2+i));
	}
	printf("\n");
}



	
