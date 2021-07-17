
#include<stdio.h>

void main() {

	int arr[10],even = 0,odd = 0;
	int *ptr = arr;

	printf("Enter the elements in an array: ");
	for(int i=0;i<10;i++) {

		scanf("%d",&arr[i]);
	}

	for(int i=0;i<10;i++) {

		if(arr[i]%2==0) 
			even = even + (*ptr);
		else
			odd = odd + (*ptr);
		ptr++;
	}

	printf("Sum of even numbers = %d\n",even);
	printf("Sum of odd numbers = %d\n",odd);
}


