
#include<stdio.h>

void addition(int *ptr1, int *ptr2,int *add, int size) {

	for(int i=0;i<size;i++) {

		*(add+i) = *(ptr1+i) + *(ptr2+i);
	}
		

}
void main() {

	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	int arr1[size];
	int arr2[size];
	int add[size];

	printf("Enter the elements in array1: ");
	for(int i=0;i<size;i++) {

		scanf("%d",&arr1[i]);
	}

	printf("Enter the elements in array2: ");
	for(int i=0;i<size;i++) {

		scanf("%d",&arr2[i]);
	}

	addition(arr1,arr2,add,size);

	printf("OUTPUT:\nAddition: ");
	for(int i=0;i<size;i++) {

		printf("%d ",add[i]);
	}
	printf("\n");
}
