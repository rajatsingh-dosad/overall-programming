

#include<stdio.h>

void main() {
	
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);

	for(int i=10 ; i>=1; i-- ) {

		printf("%d x %d = %d\n",n,i,n*i);
	}
}
