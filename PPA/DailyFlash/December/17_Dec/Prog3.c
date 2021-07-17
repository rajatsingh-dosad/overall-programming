
#include <stdio.h>

#define a 10,20,30,60,40

void main() {
	
	int arr[] = {a};

	int max = 0;

	for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++) {

		if(arr[i] > max)
			max = arr[i];
	}
	
	printf("The maximum number from the array is %d.\n",max);
}
