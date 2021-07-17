

#include<stdio.h>

void main() {
	
	int num;
	printf("Enter the number from 0 to 5\n");
	scanf("%d",&num);

	if(num==0)
		printf("Zero\n");

	else if(num==1)
		printf("One\n");

	else if(num==2)
		printf("Two\n");

	else if(num==3)
		printf("Three\n");
	
	else if(num==4)
		printf("Four\n");

	else if(num==5)
		printf("Five\n");

	else if(num>5)
		printf("Entered number is greater than 5\n");
}

/*We have asked user to enter a number between 0 to 5 and has used if-else ladder to check the condition. If number is greater than 5 we print "Number is greater than 5"*/
