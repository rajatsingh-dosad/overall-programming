
#include<stdio.h>

void main() {

	int n,c=0,count=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr1[n];
	int prime[n];

	for(int i=0;i<n;i++) {

		scanf("%d",&arr1[i]);
	}
	for(int i=0; i<n; i++) {

		int flag=0;
		int num = arr1[i];

		for(int j=2; j<=num/2 ;j++) {

			if(num%j==0) 
				flag=1;
		}
		if(flag==0) {
			prime[c] = arr1[i];
			c++;
			count++;
			arr1[i]=0;
		}
	}
	printf("After deleting prime number from array: ");
	for(int i=0;i<n;i++) {

		printf("%d ",arr1[i]);
	}
	printf("\n");
	
	printf("Only prime number array: ");

	for(int i=0;i<count;i++) {


		printf("%d ",prime[i]);
	}
	printf("\n");
}




			

