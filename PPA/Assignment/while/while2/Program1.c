/*Program 1. Write a C Program to take a number as input from user and print sum of
all natural numbers from 1 to up to that number.
Input: Enter a Number: 10
Output: The Sum of all natural number between 1 to 10 is: 55 */


#include<stdio.h>

void main() {

	int num=0;
	int i=1;
	int sum=0;


	printf("Enter a number: ");
	scanf("%d",&num);			//taking nummber from user

	while(i<=num) {				//condition from 1 to num

		sum+=i;				//adding i in sum
		i++;				//increment
	}

	printf("The sum of all narural number between 1 to %d is: %d\n",num,sum);
}


