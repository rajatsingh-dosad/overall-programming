

#include<stdio.h>

void main() {

	int arr1[5] = {10,20,30,40,50};
	int arr2[5] = {10,20,30,40,50};
	int count=0;
	for(int i=0;i<5;i++) {

		if(arr1[i] == arr2[i])
			continue;
		else	{
			printf("Array are different\n");
			count++;
			break;
		}
	}
	if(count==0) {
		printf("Both arrays are same\n");
	}
}
