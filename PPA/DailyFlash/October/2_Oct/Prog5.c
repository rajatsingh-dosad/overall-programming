
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];
	int *ptr = arr;

	printf("Enter the elements in array: ");
	for(int i=0;i<n;i++) {

		scanf("%d",ptr+i);
	}

	ptr = arr;

	printf("Printing even numbers from array: ");
	for(int i=0;i<n;i++) {

		if(*(ptr+i)%2==0) 
			printf("%d ",*(ptr+i));
	}
	printf("\n");
}
