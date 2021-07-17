
#include<stdio.h>

void main() {

	int arr1[5] = {10,20,30,40,50};
	int arr2[5];

	printf("%p\n",arr1);
	
	for(int i=0; i<5; i++) {

		printf("%p\n",&arr1[i]);
	}
}
