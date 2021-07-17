
#include<stdio.h>

void main() {

	int arr[5],sum = 0;
	int *ptr = arr;
	printf("Enter elements in an array: ");
	for(int i=0;i<5;i++) {

		scanf("%d",&arr[i]);
	}

	printf("Printing each element of array: ");
	for(int i=0;i<5;i++) {

		sum  = sum + (*ptr);
		printf("%d ",*ptr);
		ptr++;
	}

	printf("\nSum of elements is %d\n",sum);
}


