

#include<stdio.h>

void main() {

	int num1, num2;

	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);

	int num1S =  num1*num1;
	int num2S =  num2*num2;
	int num1C =  num1*num1*num1;
	int num2C =  num2*num2*num2;
	
	printf("Addition of %d & %d is %d\n",num1C,num2C,num1C+num2C);
	printf("Subtraction of %d & %d is %d\n",num1S,num2S,num1S-num2S);
}

