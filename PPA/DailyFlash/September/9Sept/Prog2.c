
#include<stdio.h>

void main() {

	int n;
	printf("Enter the number: ");
	scanf("%d",&n);

	for(int i=n; i>=0; i--) {

		if(i%2==0) {

			printf("%d ",i);
		}
	}
	printf("\n");
}
