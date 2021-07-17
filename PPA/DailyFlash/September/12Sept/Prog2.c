

#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];

	for(int i=0;i<n;i++) {

		scanf("%d",&arr[i]);
	}

	for(int i=0;i<n;i++) {

		int num = arr[i];
		int flag=0;
		for(int j=2;j<=num/2;j++) {

			if(num%j==0)
				flag=1;
		}
		if(flag==0) 
			printf("%d is a prime number\n",num);
	}
}
