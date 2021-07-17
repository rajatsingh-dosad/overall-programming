/*	Program 2: Write a Program that uses Nested Switch Case, Take Real-Time Scenario
	and write a code around that.

*/

#include<stdio.h>

void main() {
	
	char symp;
	printf("Enter y/Y if have any symptoms of corona: ");
	scanf(" %c",&symp);

	switch(symp) {

		case 'y':
		case 'Y': {
			char report;
			printf("You are going for checkup.\n");
			printf("After 2 days u have your report with you.\n");
			printf("Enter 'p' for positive for corona or 'n' if negative: ");
			scanf(" %c",&report);

			switch(report) {

				case 'p':
				case 'P':
					printf("U are Quarantined for 14 days.\n");
					break;
				case 'n':
				case 'N':
					printf("U will not be quarantined.\n");
					break;
				default:
					printf("Wrong input!\n");
					break;
			}
			  }
			break;

		default:
			printf("You are safe.\n");
			break;
	}
}

			





