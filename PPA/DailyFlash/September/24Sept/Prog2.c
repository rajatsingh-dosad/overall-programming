
#include<stdio.h>

void main() {

	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	int *iptr = &n;

	for(int i = 1; i<=10;i++) {

		printf("%d X %d = %d\n",*iptr,i,*iptr*i);
		
	}

}
