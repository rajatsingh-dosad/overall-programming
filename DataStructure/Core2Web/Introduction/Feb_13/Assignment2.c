
#include <stdio.h>
#include <stdlib.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];

	int noOfEle;
	printf("Enter the number of elements you want to insert: ");
	scanf("%d",&noOfEle);

	printf("Enter the elements in the array: ");
	for(int i=0;i<noOfEle;i++) {

		scanf("%d",&arr[i]);
	}

	int flag = 0;
	for(int i=1;i<noOfEle-1;i++) {

		int sum = arr[0] + arr[noOfEle-1];

		if(noOfEle == n) {

			printf("Array is full, cannot enter more elements\n");
			break;
		}
		
		if(arr[i] == sum) {

			arr[noOfEle++] = sum;
			i = 1;
			flag = 1;
		}
	}

	if(flag ==0 )
		printf("There is no element equal to sum\n");

	for(int i=0;i<noOfEle;i++) {

		printf("%d\n",arr[i]);
	}
}
