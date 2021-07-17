
/*	Program 10. Write a Program to check Whether the Entered Number is Perfect
	Number or Not until User not exit. If User Enters 'N' Then Exit The Loop.

Enter Number: 6
Output:
	6 is perfect Number
	Do you want to Continue? 'Y'
Enter Number: 12
Output :
	12 is not perfect Number
	Do you want to continue ? 'N'
	Exit The Loop.
{Note:
Perfect Number: The Sum of Divisor Of Entered Number Is Equal To That
Number.
6: 1 + 2 + 3 = 6
6 == 6, perfect number}

*/


#include<stdio.h>

void main() {

	char choice;
	do {	
		int num;
		printf("Enter Number: ");
		scanf("%d",&num);
		int store=num;
		int sum=0;
		for(int i=1;i<num;i++) {

			if(num%i==0)
				sum=sum+i;
		}
		if(store==sum)
			printf("%d is perfect Number.\n",store);
		else
			printf("%d is not perfect Number.\n",store);

		printf("Enter y/Y to continue or 'N' to exit.");
		scanf(" %c",&choice);
	}while(choice!='N');
}









