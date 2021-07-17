
/*Program 5: Write a C program that accepts two numbers from the user and prints
the average of those two number.
Input: 10 20
Output: Average of 10 & 20 is\ 15      */


#include<stdio.h>

void main() {

	int num1,num2,Avg;

	printf("Enter the two number:");
	scanf("%d%d",&num1,&num2);		//Taking input as two numbers which are integer

	Avg=(num1+num2)/2;			//Removing average of two numbers

	printf("Average of %d & %d is %d\n",num1,num2,Avg);	//Printing 
}
