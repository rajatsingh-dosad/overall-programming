

#include<stdio.h>

void main() {

	int a = 20;
	int b = 30;

	switch(a) {

		case 20:
			printf("Twenty\n");
			
		case 30:
			printf("Thirty\n");
			break;
	}

	printf("Outside 1 Switch\n");

	switch(b) {

		case 30:
			printf("Thirty\n");
		
		case 20:
			printf("Twenty\n");
			break;
	}
	printf("Outside 2 Switch\n");
}
