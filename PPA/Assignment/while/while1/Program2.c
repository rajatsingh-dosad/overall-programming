/*Program 2. Write a C program to count number of digits in a number.
{Hint: performing modulus operation by 10 on the number gives us the last digit from
that number}
Input: 13345
Output: 5   */

#include<stdio.h>

void main() {
	
	int n;
	int rem=0;
	int count=0;

	printf("Enter a number: ");
	scanf("%d",&n);			//taking input
	
	while(n!=0) {			//condition

		rem=n%10;		//modulus operator will give the last digit of the number
		count++;		//if we get the last number we increment the count variable

		n=n/10;			//dividing number by 10 will give the number except the last digit
	}
	printf("The number of digits are %d.\n",count);
}
