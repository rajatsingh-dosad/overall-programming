

#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ") ;
	scanf("%d",&n);

	int arr[n];

	printf("Enter the elements: ");
	for(int i=0;i<n;i++) {

		scanf("%d",&arr[i]);
	}
	

	int count=0;
	for(int i=0;i<n;i++) {

		int temp = arr[i];
		while(temp!=0) {

			int rem= temp%10;
			if(rem==1)
				count++;
			temp =temp / 10;
		}
	}

	printf("Occurence of 1's in array: %d\n",count);
}
