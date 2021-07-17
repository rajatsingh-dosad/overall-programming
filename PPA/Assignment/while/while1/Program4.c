/*4.Write a C program to take input from user and check whether the number is
Perfect number or not. Using while loop.
{Note: if sum of all perfect divisors of a number is equal to that number then that
number is termed as perfect number}
Input: 6
Output: 6 Is a Perfect Number.  */


#include<stdio.h>

void main() {
	int n=0;
	int i=1;
	int s=0;
	printf("Enter a number: ");
	scanf("%d",&n);

	while(i<n) {		//condition till i less than n

		if(n%i==0)	//checking perfect divisor
			s+=i;	//adding perfect divisor to sum
		i++;		//increment
	}

	if(s==n)		//if the sum is equal to n than its a perfect number
		printf("%d is a Perfect Number. \n",n);
	else
		printf("%d is not a Perfect Number. \n",n);
		
}
