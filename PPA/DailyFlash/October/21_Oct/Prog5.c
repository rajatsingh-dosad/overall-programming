
#include<stdio.h>

void fibonacciSeries() {
	
	int first = 0;
	int second = 1;

	int next;
	for(int i=0;i<10;i++) {

		printf("%d ",first);
		next = first + second;
		first = second;
		second = next;
	}

	
}

void main() {
	
	printf("Fibonacci series upto 10 are: ");
	fibonacciSeries();
	printf("\n");
}
