

#include<stdio.h>

void main() {

	int x = 10;

	switch(x) {

		case 5+5:
			printf("5+5\n");
		case 6+4:
			printf("6+4\n");
		case 10:
			printf("10\n");
		default:
			printf("Default\n");
	}
}
