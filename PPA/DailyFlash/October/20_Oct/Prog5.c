
#include<stdio.h>

int prime(int num) {
	int flag = 0;
	for(int i=2;i<=num/2;i++) {

		if(num % i == 0) {
			flag=1;
			break;
		}
	}
	if(flag==1 || num==1)
		printf("%d is not prime\n",num);
	else
		printf("%d is prime\n",num);
}

void main() {

	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the elements in an array: ");
	for(int i=0;i<size;i++) {

		scanf("%d",&arr[i]);
	}

	for(int i=0;i<size;i++) {

		prime(arr[i]);
	}
}
