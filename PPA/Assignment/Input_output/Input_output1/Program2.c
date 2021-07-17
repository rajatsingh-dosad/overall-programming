/*Program 2: Write a C program that accepts the time in hours and minutes from user,
and Prints as total number of Minutes.
Input:
Enter Hours: 2
Enter minutes: 30
Output: Total Minutes: 150 minutes.*/


#include<stdio.h>

void main() {

	int hour,min;		
	int total_time;

	printf("Enter the hours and minutes\n");
	scanf("%d%d",&hour,&min);			//Taken hour and minute from user
	
	total_time=(hour*60)+min;			//Adding hour and minute(1 hour=60 min so adding min with hour*60)

	printf("Total Minutes: %d minutes\n",total_time); //printing Total_time
}

