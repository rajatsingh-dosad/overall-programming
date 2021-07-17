
#include<stdio.h>

extern int num;

static void square() {

	num = num * num;
}

int sqret() {
	
	square();
	return num;
}
