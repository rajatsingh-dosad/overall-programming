

#include<stdio.h>

void main() {

	int x = 10;
	int i= 1;

	forDemo:
		printf("Printing.....\n");

	for(;i<= x;) {
		i++;
		goto forDemo;

	}
	printf("After for loop\n");

}
	

