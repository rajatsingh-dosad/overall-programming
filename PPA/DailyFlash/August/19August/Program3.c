

#include<stdio.h>

void main() {

	int month;

	printf("Enter a number from 1 to 12: ");
	scanf("%d",&month);

	switch(month) {

		case 1:
			printf("January is a 31 days month.\n");
			break;
		case 2:
			printf("February is a 29 days month.\n");
			break;
		case 3:
			printf("March is a 30 days month.\n");
			break;
		case 4:
			printf("April is a 30 days month.\n");
			break;
		case 5:
			printf("May is a 31 days month.\n");
			break;
		case 6:
			printf("June is a 30 days month.\n");
			break;
		case 7:
			printf("July is a 31 days month.\n");
			break;
		case 8:
			printf("August is a 31 days month.\n");
			break;
		case 9:
			printf("September is a 30 days month.\n");
			break;
		case 10:
			printf("October is a 31 days month.\n");
			break;
		case 11:
			printf("November is a 30 days month.\n");
			break;
		case 12:
			printf("December is a 31 days month.\n");
			break;
		default:
			printf("U eneterd something else!\n");
			break;
	}
}
