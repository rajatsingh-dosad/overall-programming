

#include<stdio.h>

void main() {

	int num1, num2, div;

	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);

	printf("Multiplication is %d\n",num1*num2);

	div = num1<num2 ? num2/num1 : num1/num2;

	printf("Division is %d\n",div);
}
