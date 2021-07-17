

#include<stdio.h>
void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	char arr[n];
	printf("Enter the all Uppercase elements: ");
	for(int i=0;i<n;i++) {

		scanf(" %c",&arr[i]) ;
	}
	
	printf("Printing all converted Uppercase to Lowercase: ");
	for(int i=0; i<n; i++) {

		printf("%c ",arr[i]+32);
	}
	printf("\n");
}
