/*Program 4. Write a C Program to print the countdown of days to submit the
assignment
Input: Enter No of days to complete the assignment: 7
Output:

7 days remaining
6 days remaining
5 days remaining
.
.
1 days remaining
0 days Assignment is Overdue  */


#include<stdio.h>

void main() {

	int day;

	printf("Enter No of days to complete the assignment: ");
	scanf("%d",&day);						//inputting the number of days

	while(day>=0) {							//condition till days =0

		if(day==0)						//if day==0 we are printing below statement
			printf("%d days Assignment is Overdue\n",day);
		else
			printf("%d days remaining\n",day);		//else this statement
		day--;
	}
}


