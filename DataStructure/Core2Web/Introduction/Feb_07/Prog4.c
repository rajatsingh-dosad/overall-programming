
#include <stdio.h>

void main() {

	int *x = (int*)malloc(sizeof(int));
	*x = 10;

	printf("%d\n",*x);
}
