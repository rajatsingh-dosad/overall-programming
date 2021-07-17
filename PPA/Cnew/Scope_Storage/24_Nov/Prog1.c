
#include <stdio.h>

void fun(int x, int y);

int m = 30;			//Global

void main() {

	int a = 10;		//Local
	int b = 20;		//Local
	
	fun(a,b);

	printf("%d\n",a);	//10
	printf("%d\n",b);	//20
}

void fun(int p, int q) {
	
	goto label;
	
	label:
		printf("Jump\n");

}
