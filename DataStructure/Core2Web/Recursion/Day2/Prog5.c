
#include <stdio.h>

int fun(int x) {

	if(x<=0)
		return 100;

	printf("Hello1\n");
	fun(x-1);


	printf("Hello2\n");
	fun(x-2);

}

void main() {

	printf("%d\n",fun(3));

}
