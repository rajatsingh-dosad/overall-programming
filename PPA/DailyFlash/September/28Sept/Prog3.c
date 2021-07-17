
#include<stdio.h>

void main() {

	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the elements in array: ");
	for(int i=0;i<size;i++) {

		scanf("%d",&arr[i]);
	}
	
	int num;
	for(int i=0;i<size;i++) {
		
		num = arr[i];
		if(num%2==0) {
			arr[i]=++num;
		}
		else 
			arr[i]=--num;
	}

	printf("******************Output************************\n");
	for(int i=0;i<size;i++) {

		printf("%d ",arr[i]);
	}
	printf("\n");
}


