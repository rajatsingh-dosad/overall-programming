
#include<stdio.h>

void main() {

	int num;
	printf("Enter a number: ");
	scanf("%d",&num);

	int sqr = num * num;
	int cub = num * num * num;

	int *ptr1 = &sqr;
	int *ptr2 = &cub;

	int *arrptr[] = {ptr1,ptr2};

	printf("Output:\n");
	printf("%d\n",*(arrptr[0]));
	printf("%d\n",*(arrptr[1]));
}
