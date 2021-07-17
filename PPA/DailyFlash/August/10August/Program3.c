/*	Program 3: Write a Program That Take Input Integer From User, And Print First And
	Last Digit From That Entered Number Using While Loop.

Input:
Enter Number: 83467
Output:
First Number: 8
Last Number: 7

*/


#include<stdio.h>

void main() {

	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	int firstNo;
	int lastNo;
	int store=num;

	while(num!=0) {

		if(num==store)
			lastNo=num%10;
		else if(num<10 && num>0)
			firstNo=num;

		num=num/10;
	}
			printf("First Number: %d\n",firstNo);
			printf("Last Number: %d\n",lastNo);

}

			
		


