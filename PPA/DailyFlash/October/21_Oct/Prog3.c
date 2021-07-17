
#include<stdio.h>

void desc(int arr[],int size) {

	for(int i=0;i<size;i++) {
		

		for(int j=i+1;j<size;j++) {
			
			int temp;
			if(arr[i]>arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				
			}
		}
	}
	for(int i=0;i<size;i++) {

		printf("%d ",arr[i]);
	}
	
}
void main() {

	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the elements in the array: ");
	for(int i=0;i<size;i++) {

		scanf("%d",&arr[i]);
	}
	
	printf("\nOUTPUT iN ASCENDING ORDER\n");
	desc(arr,size);
	printf("\n");
}
