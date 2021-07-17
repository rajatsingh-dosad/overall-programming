

#include<stdio.h>

void main() {

	int n,temp;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];

	for(int i=0;i<n;i++) {

		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++) {
		int num=0;
		for(int j=1;j<n;j++) {

			if(arr[num] > arr[j]) {

				temp =arr[num];
				arr[num] = arr[j];
				arr[j] = temp;
			}
		num++;
		}
	}

	printf("First Largest - %d\n",arr[n-1]);
	printf("Second Largest - %d\n",arr[n-2]);

				
}


