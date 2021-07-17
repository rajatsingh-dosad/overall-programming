

#include<stdio.h>

void main() {

	int num1,num2;

	printf("Enter the two numbers: ");
	scanf("%d%d",&num1,&num2);

	if(num1<num2) 
		printf("The Minimum amongst %d & %d is %d\n",num1,num2,num1);
	else
		printf("The Minimum amongst %d & %d is %d\n",num1,num2,num2);

}
