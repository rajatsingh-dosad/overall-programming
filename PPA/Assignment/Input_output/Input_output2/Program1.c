/*Program 1: Write a C Program that accepts two double variables from user and print
only 2 precision. Moreover, do all arithmetic operation on them.
Input:
First Double value: 12.745
Second Double Value: 10.2229
Output:
The Entered Number up to second precision are: 12.74 & 10.22
Their Addition: 22.96
Their Multiplication: 130.20
Their Subtraction: 2.52
Their division: 1.24  */


#include<stdio.h>

void main() {

	double num1;
	double num2;

	printf("First Double value: ");
	scanf("%lf",&num1);				//First double value from user
	
	printf("Second Double value: ");		
	scanf("%lf",&num2);				//second double value from user(format specifier of double is "lf")

	printf("The entered Number up to second precision are: %.2lf & %.2lf\n",num1,num2);   //printing upto second precision(%.2lf)
	printf("Their Addition: %.2lf\n",num1+num2);
	printf("Their Multiplication: %.2lf\n",num1*num2);
	printf("Their Subtraction: %.2lf\n",num1-num2);
	printf("Their division: %.2lf\n",num1/num2);
}
