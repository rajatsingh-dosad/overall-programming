
/*Program 1. Write a C Program to print the sum of all even numbers and
multiplication of odd numbers ranging between 1 to n. where n is a number entered
by user.
Input: Enter N => 10
Output:
Sum of all even numbers between 1 to 10: 30
Multiplication of all odd numbers between 1 to 10: 945  */

#include<stdio.h>

void main() {

	int sum=0;		//initialized sum as 0
	int mul=1;		//initialized mul as 1 becoz if multiply any number with 0 so it will be 0 thats 1 we have written
	int num;
	int i=1;

	printf("Enter a number: ");
	scanf("%d",&num);		//input from user
	
	while(i<=num) {			//condition 

		if(i%2==0)		//cheking even numbers only
			sum+=i;		//adding i in sum if condition is true	
		else if(i%2!=0)		//checking odd numbers
			mul*=i;		//multiplying i in mul if condition is true
		i++;			//increment
	}

	printf("Sum of all even numbers from 1 to %d: %d\n",num,sum);
	printf("Multiplication of all odd numbers from 1 to %d: %d\n",num,mul);
}


