
#include <stdio.h>

int fun(int x) {

	if(x<=0)
		return 1;

	printf("Hello\n");

	return fun(x-1)+fun(x-2);	//First call will be given to fun(x-1)
}

void main() {

	int val = fun(3);

	printf("%d\n",val);
}
