

#include<stdio.h>

void main() {

	int num1, num2,temp=0;

	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);

	printf("Before Swap: %d %d\n",num1,num2);

	temp = num2;
	num2 = num1;
	num1 = temp;

	printf("After Swap: %d %d\n",num1,num2);
}



