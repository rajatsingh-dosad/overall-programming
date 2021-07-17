
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];

	for(int i=0;i<n;i++) {

		scanf("%d",&arr[i]);
	}

	
	printf("palindrome numbers are : ");
	for(int i=0;i<n;i++) {

		 int num = arr[i];
		 int rev = 0;
		 while(num!=0) {
			 rev = rev * 10 + (num%10);
			 num = num /10;
		 }
		 if(rev == arr[i])
			 printf("%d ",rev);
	}
	printf("\n");

}
