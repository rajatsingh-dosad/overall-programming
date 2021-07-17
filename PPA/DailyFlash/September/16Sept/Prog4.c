
#include<stdio.h>

void main() {

	int arr[] = {2,5,3,7,8,1,4,6,9,0};
	int temp;

	for(int i=0; i<10; i++) {
		int num = 0;

		for(int j=1; j<10; j++) {
			
			if(arr[num] > arr[j]) {
				temp = arr[j];
				arr[j] = arr[num];
				arr[num] = temp;
			}
			num++;
		}
	}
	printf("Printing array after sorting is : [ ");
	for(int i=0; i<10; i++) {
		printf("%d ",arr[i]);
	}
	printf(" ]\n");
}

