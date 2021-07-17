

#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++) {

		scanf("%d",&arr[i]);
	}

	printf("Array after sorting is : [ "); 
	for(int i=0;i<n;i++) {
		int num=0;
		for(int j=1;j<n;j++) {

			if(arr[num]>arr[j]) {
	
				int temp = arr[num];
				arr[num] = arr[j];
				arr[j] = temp;
			
			}
			num++;
		}
	}
	for(int i=0; i<n;i++) {

		printf("%d ",arr[i]);
	}
	printf(" ]\n");
}


	
