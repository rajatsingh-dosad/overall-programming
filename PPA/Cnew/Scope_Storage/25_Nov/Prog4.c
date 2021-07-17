
#include<stdio.h>

 int b = 30;

void fun() {
	
	auto int x = 20;
	printf("%d\n",x);
}

void main() {

	auto int a = 10;

	printf("%d\n",a);

	fun();
}
