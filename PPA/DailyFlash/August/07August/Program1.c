

#include<stdio.h>

void main() {
	int num1,num2;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);

	int store = num1;
	int num_2=num2;
	do {
		
		store =store +num1;
		num2--;
	}while(num2>1);
	printf("Multiplication of %d and %d is %d.\n",num1,num_2,store);
}

