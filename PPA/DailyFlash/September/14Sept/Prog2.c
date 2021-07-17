

#include<stdio.h>

void main() {
	
	int arr[5];
	int facArr[5];
	
	for(int i=0;i<5;i++) {
		
		scanf("%d",&arr[i]);
		int fac=1;
		int temp=arr[i];

		while(temp>=1) {
			fac = fac * temp;
			temp--;
		}
		facArr[i]=fac;
	}
	printf("Normal Array is: ");
	for(int i=0;i<5;i++) {

		printf("%d ",arr[i]);
	}
	printf("\n");
	
	printf("Factorial Array is: ");
	for(int i=0;i<5;i++) {

		printf("%d ",facArr[i]);
	}
	printf("\n");
}





