
#include<stdio.h>

void main() {
	
	int size,sizeN;
	printf("Enter array size: ");
	scanf("%d",&size);

	if(size%2!=0) {
			printf("OOps please an even size only: ");
			scanf("%d",&size);
		}
	


	int arr[size];
	
	printf("Enter the elements in array: ");
	for(int i=0;i<size;i++) {

		scanf("%d",&arr[i]);
	}

	int sum = 0;
	int count = 0;
	int *ptr = arr;
	for(int i=0;i<size;i++) {
			
		if(i%2==0) {
			sum = sum + (*ptr);
			count++;
		}
		ptr++;		
	}

	printf("Average = %d\n",sum/count);
	
}



			

		
