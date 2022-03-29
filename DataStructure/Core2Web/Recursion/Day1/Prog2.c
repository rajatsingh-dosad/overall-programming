
//Print number 5-1

#include<stdio.h>

void fun(int i) {

	if(i>5)
	 	return;

	fun(i+1);  
	printf("%d\n",i);
}

void main() {

	fun(1);
}
