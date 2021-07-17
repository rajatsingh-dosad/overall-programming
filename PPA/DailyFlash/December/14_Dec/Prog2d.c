
#include<stdio.h>

void reverse(int arr[], int size) {
	
	int temp;
	for(int i=0;i<size/2;i++) {
		
		temp = arr[size-1-i];
		arr[size-i-1] = arr[i];
		arr[i] = temp;
	}
}
		
