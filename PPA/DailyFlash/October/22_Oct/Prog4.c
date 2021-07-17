
#include<stdio.h>
int average(int *ptr,int size) {
	int sum = 0;
	int avg = 0;
	for(int i=0;i<size;i++) {
		
		sum = sum + *(ptr+i);
	}

	avg = sum / size;

	return avg;


}
void main() {

	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	int arr[size];
	int avg = 0;

	printf("Enter the elements in the array: ");
	for(int i=0;i<size;i++) {

		scanf("%d",&arr[i]);
	}

	int (*fptr)(int *,int) = average;

	avg = fptr(arr,size);

	printf("Average is %d\n",avg);

}


