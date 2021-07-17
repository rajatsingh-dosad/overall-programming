
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];

	for(int i=0; i<n; i++) {

		scanf("%d",&arr[i]);
	}
	
	printf("Elements divisible by 5 are : \n");
	for(int i=0;i<n;i++) {
		if(arr[i]%5==0)
			printf("%d ",arr[i]);
	}
	printf("\n");
}

