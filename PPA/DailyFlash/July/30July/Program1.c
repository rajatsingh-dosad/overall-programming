

#include<stdio.h>

void main() {
	char ch='A';
	for(int i=1; i<=5; i++) {

		for(int j=4; j>=i; j--) {

			printf("  ");
		}
		for(int k=1; k<=i*2-1; k++) {

			printf("%c ",ch);
		}
		ch++;
		printf("\n");
	}
}
