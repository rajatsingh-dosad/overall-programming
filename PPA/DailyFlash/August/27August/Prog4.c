

#include<stdio.h>

void main() {

	int num1, num2;
	char sign;

	printf("Enter the two numbers: ");
	scanf("%d%d",&num1,&num2);

	printf(" '+' - Addition\n '-' - Subtraction\n '*' - Multiplication\n '/' -  Division\n ");

	printf("Enter the Operation you want to do.\n");
	scanf(" %c",&sign);

	switch(sign) {

		case '+' :
			printf("Addition of %d & %d is %d.\n",num1,num2,num1+num2);
			break;
		case '-' :
			printf("Subtraction of %d & %d is %d.\n",num1,num2,num1-num2);
			break;
		case '*' :
			printf("Multiplication of %d & %d is %d.\n",num1,num2,num1*num2);
			break;
		case '/' :
			printf("Division of %d & %d is %d.\n",num1,num2,num1/num2);
			break;
		default :
			printf("U entered a wrong choice!\n");
			break;
	}
}
