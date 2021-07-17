
/*	Program 9. Write a Program to check Whether the Entered Number is Strong
	Number or Not. Until User, not exit. If User Enters 'N' Then Exit The Loop.

Input/Output:
	Enter Number: 124
	Output: It Is Not a Strong Number
	Do you want to Continue ? 'Y'
	Enter Number : 145
	Output : It Is a Strong Number
	Do you want to continue ? 'N'
	Exit The Loop.
{Note:
Strong Number: The Sum of Factorial Of Each Digit In Entered Number Is Equal
To That Number.
145: 1! + 4! + 5!
: 1 + 24 + 120
: 145
145 == 145, strong number. }

*/


#include<stdio.h>

void main() {

	char choice;

	do {
		int num;
		printf("Enter the number: ");
		scanf("%d",&num);
		int store=num;
		int rem=0;
		int sum=0;
		while(num!=0) {
			rem=num%10;
			int fac=1;
			while(rem>=1) {
				fac=fac*rem;
				rem--;
			}
			sum=sum+fac;
			num=num/10;
		}
		
		if(sum==store)
			printf("It is a strong number.\n");
		else
			printf("It is not a strong number.\n");
		printf("Enter y/Y to continue and 'N' to exit : ");
		scanf(" %c",&choice);
	}while(choice!='N');
}





