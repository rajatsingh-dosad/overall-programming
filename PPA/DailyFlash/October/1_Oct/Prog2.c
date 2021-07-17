
#include<stdio.h>

void main() {

	int arr[] = {10,20,30,40,50,70,80};

	int *ptr1 = &arr[0];
	int *ptr2 = arr;

	for(int i=0; i<7;i++) {
		ptr1++;
	}
	
	for(int i=0; i<7;i++) {
		ptr2++;
	}

	int diff = ptr2 - ptr1;
	printf("%d\n",diff);
}
	


