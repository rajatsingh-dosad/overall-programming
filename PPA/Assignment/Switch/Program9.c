

#include<stdio.h>

void main() {
	
	int month;

	printf("Enter the month number:\n");
	scanf("%d",&month);

	switch(month) {

		case 1:
			printf("January has 31 days\n");
			break;

		case 2:
			printf("February has 29 days\n");
			break;


		case 3:
			printf("March has 31 days\n");
			break;

		case 4:
			printf("April has 30 days\n");
			break;

		case 5:
			printf("May has 31 days\n");
			break;

		case 6:
			printf("June has 30 days\n");
			break;

		case 7:
			printf("July has 31 days\n");
			break;

		case 8:
			printf("August has 31 days\n");
			break;

		case 9:
			printf("September has 30 days\n");
			break;

		case 10:
			printf("October has 31 days\n");
			break;

		case 11:
			printf("November has 30 days\n");
			break;

		case 12:
			printf("December has 31 days\n");
			break;

		default:
			printf("U entered number greater than 12\n");
			break;
	}
}
/*Here we have taken 12 cases as months number entered can be from 1-12 and user enters its choice and gets the number of days present in amonth.*/
