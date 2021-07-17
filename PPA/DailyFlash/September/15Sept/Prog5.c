

#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];
	int rev[n];

	printf("Enter the marks of student: ");
	for(int i=0;i<n;i++) {

		scanf("%d",&arr[i]);
	}
	
	printf("Array after reversing is : [ ");
	for(int i=0; i<n; i++) {

		rev[i] = arr[n-1-i];
		printf("%d ",rev[i]);
	}
	printf(" ]\n");
}




