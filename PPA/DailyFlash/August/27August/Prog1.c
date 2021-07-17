

#include<stdio.h>

void main() {

	int num1,num2,sub;

	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);

	printf("Addition is %d\n",num1+num2);
	
	sub=num1>num2 ? num1-num2 : num2-num1;

	printf("Subtraction is %d\n",sub);
}
