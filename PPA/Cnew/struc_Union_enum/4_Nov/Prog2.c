
#include<stdio.h>

struct Arithmetic {

	int a;
	int b;
}arith= {10,20};

void add(struct Arithmetic *ptr) {
	
	printf("Addition = %d\n",ptr->a + ptr->b);
}


void main() {

	add(&arith);
}
