
#include<stdio.h>

void displayArr(int *ptr1,int *ptr2,int size) {

	printf("Array1: ");
	for(int i=0;i<size;i++) {

		printf("%d ",*(ptr1+i));
	}

	printf("\nArray2: ");
	for(int i=0;i<size;i++) {
		printf("%d ",*(ptr2+i));
	}
	printf("\n");

}

void swap(int *arrptr1,int *arrptr2,int size) {
	
	for(int i=0;i<size;i++) {	
		*(arrptr1+i) = *(arrptr1+i) + *(arrptr2+i);
		*(arrptr2+i) = *(arrptr1+i) - *(arrptr2+i);
		*(arrptr1+i) = *(arrptr1+i) - *(arrptr2+i);
	}
}
void main() {

	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	int arr1[size];
	int arr2[size];

	int *arr1ptr = arr1;
	int *arr2ptr = arr2;

	printf("Enter the elements in array1: ");
	for(int i=0;i<size;i++) {

		scanf("%d",&arr1[i]);
	}

	printf("Enter the elements in array2: ");
	for(int i=0;i<size;i++) {

		scanf("%d",&arr2[i]);
	}
	
	printf("\nElements of the array before calling the function:\n");
	displayArr(arr1,arr2,size);

	swap(arr1ptr,arr2ptr,size);
	
	printf("\nElements of the array after calling the function:\n");
	displayArr(arr1,arr2,size);
}
