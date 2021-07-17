/*Program 5: Write a C Program that accept minutes as input from user and display the
total number of hours and minutes.
Input: 452
Output: 7 Hours, 32 Minutes.  */

#include<stdio.h>

void main() {

	int min;
	int hour;

	printf("Enter the minutes: ");
	scanf("%d",&min);		//take total minutes from user
	
	hour=(int)min/60;		//this gives us the hour
	min=min%60;			//this gives the remaining minutes
	printf("%d Hours, %d Minutes\n",hour,min);
}

