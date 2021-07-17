
#include<stdio.h>

void delElement(int *,int,int);
int sum(int *,int);
void reverse(int *, int);

void main() {
	
	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	int arr[size];
	
	printf("Enter the elements in the array: ");
	for(int i=0; i<size; i++) {

		scanf("%d",&arr[i]);
	}
	
	int elm;
	printf("\nEnter the element you want to delete from the array: ");
	scanf("%d",&elm);

	delElement(arr,elm,size);

	printf("The array after deleting the element is :\n");
	for(int i=0;i<size-1;i++) {
		
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	int s = sum(arr,size-1);
	printf("\nThe sum of the array elements is : %d\n",s);

	reverse(arr,size-1);
	printf("The array after reversing is: ");
	for(int i=0;i<size-1;i++) {

		printf("%d ",arr[i]);
	}
	printf("\n");
}


	
