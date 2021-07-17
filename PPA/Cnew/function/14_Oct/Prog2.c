
#include<stdio.h>

void main() {

	int a=10,b=5;

	printf("%d %d\n",a,b);	//10 5

	a = a + b;
	b = a - b;
	a = a - b;

	printf("%d %d\n",a,b);	//5 10
}
