
#include<stdio.h>

void main(void)  {

	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	int arr[size];
	
	printf("Enter the elements in array: ");
	for(int i=0; i<size; i++) {

		scanf("%d",&arr[i]);
	}
	

	int *arrptrL = 0;
	int *arrptrS = 0;
	int dis;

	printf("************************Output**********************************\n");
	for(int i=0;i<size; i++) {
	
		arrptrL = &arr[size-1-i];
		arrptrS = &arr[0];

		dis = *arrptrL - *arrptrS;

		printf("%d ",arr[dis]);
	}
	printf("\n");
}
	


