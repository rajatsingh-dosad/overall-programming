
#include <stdio.h>

#define x 20

void fun();

void main() {
	
	printf("%d\n",x);

	#if x<30
		printf("Hello\n");

	#else 
		printf("Hi\n");
	#endif
	
}

