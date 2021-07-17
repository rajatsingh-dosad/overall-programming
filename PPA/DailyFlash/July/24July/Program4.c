

#include<stdio.h>

void main() {

	for(int i=1; i<=5; i++) {
		char ch='A';
		for(int j=4; j>=i; j--) {

			printf("  ");
			ch++;;
		}
		for(int k=1; k<=i; k++) {

			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
