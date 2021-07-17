
#include<stdio.h>

void perfectSquare(int size,int arr[]) {
	
	int num = 0;
	for(int i=0;i<size;i++) {
		num = arr[i];
		
		for(int j=1;j<=num;j++) {
			if(num==j*j)
				printf("%d is a perfect square\n",arr[i]);
		}
	}
}
		
void main() {

	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the numbers in the array:\n");
	for(int i=0;i<size;i++) {

		scanf("%d",&arr[i]);
	}

	void (*fptr)(int,int[]) = perfectSquare;
	fptr(size,arr);
}

