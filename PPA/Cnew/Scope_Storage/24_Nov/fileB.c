
#include<stdio.h>

void fun(int x, int y) {
	
	extern int a;
	printf("%d\n",x+y);
	printf("%d\n",a);
}
