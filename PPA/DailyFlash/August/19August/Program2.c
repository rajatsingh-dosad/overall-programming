

#include<stdio.h>

void main() {

	int num;

	printf("Enter a number between 0 to 6: ");
	scanf("%d",&num);

	switch(num) {

		case 0:
			printf("Monday\n");
			break;
		case 1:
			printf("Tuesday\n");
			break;
		case 2:
			printf("Wednesday\n");
			break;
		case 3:
			printf("Thursday\n");
			break;
		case 4:
			printf("Friday\n");
			break;
		case 5:
			printf("Satday\n");
			break;
		case 6:
			printf("Sunday\n");
			break;
		default:
			printf("U enetered number other than 0 to 6!\n");
			break;
	}
}
