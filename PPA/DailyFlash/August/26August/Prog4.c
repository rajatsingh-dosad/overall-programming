

#include<stdio.h>

void main() {

	int num;

	printf("Enter a number: ");
	scanf("%d",&num);

	for(int i=1;i<=10;i++) {

		printf("%d ",num*i);
	}
	printf("\n");
}
