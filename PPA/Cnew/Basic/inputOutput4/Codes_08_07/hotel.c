

#include<stdio.h>

void main() {

	int choice;

	printf("Enter your choice to book the hotel\n");
	printf("********************HOTEL NAME******************************\n");
	printf("1:TAJ\n2:MARRIOT\n3SANSKRUTI\n4:OAKWOOD\n5:ORCHID\n");

	scanf("%d",&choice);
	
	switch(choice) {

		case 1:
			printf("TAJ hotel is booked\n");
			break;

		case 2:
			printf("MARRIOT hotel is booked\n");
			break;

		case 3:
			printf("SANSKRUTI hotel is booked\n");
			break;

		case 4:
			printf("OAKWOOD hotel is booked\n");
			break;

		case 5:
			printf("ORCHID hotel is booked\n");
			break;

		default:
			printf("U entered a wrong choice!\n");
			break;
	}
	printf("Out of switch\n");
}
