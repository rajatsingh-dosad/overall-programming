
#include <stdio.h>

#define x 20

void main() {

	#ifdef x
		printf("Hello\n");
	#else 
		#error Undeclared
	#endif
}
