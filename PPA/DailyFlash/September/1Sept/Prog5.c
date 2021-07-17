

#include<stdio.h>

void main() {

	int num1, num2;

	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);

	int max = num1>num2 ? num1 : num2;

	printf("The Maximum number amongst %d & %d is %d\n",num1,num2,max);
}
