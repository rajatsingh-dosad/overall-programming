

#include<stdio.h>

void main() {

	int num;

	printf("Enter the number: ");
	scanf("%d",&num);

	for(int i=2; i<=num/2;i++) {

		if(num%i==0) {

			printf("%d ",i);
		}
	}
	printf("\n");
	
}


