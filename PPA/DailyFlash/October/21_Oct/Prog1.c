
#include<stdio.h>

int minimum(int *ptr,int size) {	
	
	int min = 9999;
	for(int i=0;i<size;i++) {

		if(*(ptr+i) < min)
			min = *(ptr+i);
	}
	return min;		
}

void main() {

	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the elements in the array: ");
	for(int i=0;i<size;i++) {

		scanf("%d",&arr[i]);
	}

	int min = 0;
       	min = minimum(arr,size);

	printf("Minimum number from array is %d\n",min);
}


