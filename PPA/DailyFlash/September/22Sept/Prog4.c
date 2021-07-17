
#include<stdio.h>

void main() {

	int n1,n2;

	printf("Enter the two numbers: ");
	scanf("%d %d",&n1,&n2);

	int *n1ptr = &n1;
	int *n2ptr = &n2;

	printf("Before swapping:\n ");
	printf("n1= %d & n2=%d\n",n1,n2);
	
	int temp = *n2ptr;
	*n2ptr = *n1ptr;
	*n1ptr = temp;

	printf("\nAfter swapping:\n ");
	printf("n1= %d & n2=%d\n",n1,n2);
}
