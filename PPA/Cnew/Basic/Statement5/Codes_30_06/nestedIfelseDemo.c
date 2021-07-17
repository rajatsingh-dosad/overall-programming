

#include<stdio.h>

void main() {

	int marks = 80;
	int compMarks =75;

	if(marks > 70) {

		printf("Fc/Modern?\n");
		
		if(compMarks > 80) {
		
			printf("Fc-Bcs\n");
		}
		else {
			printf("Modern-Bsc\n");
		}
	}

	else {
		printf("Sportsman - Cricket\n");
	}

	printf("Out of if-else\n");
}


