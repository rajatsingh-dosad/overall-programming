
//Print number 1-5

#include<stdio.h>

void fun(int i) {

	if(i>5)
		return;

	printf("%d\n",i);
	fun(i+1);
}

void main() {

	fun(1);
}
