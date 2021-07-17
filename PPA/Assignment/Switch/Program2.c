
#include<stdio.h>

void main() {

	int x=10;
	int y=20;

	switch(x) {

		case x:
			printf("Case 10\n");
			printf("X=%d\n",x);
			break;
		case y:
			printf("Case 20\n");
			printf("Y=%d\n",y);
			break;

		default:
			printf("Default\n");
			break;
	}
}


//Here case:x and case:y will give an error because x and y doesnt reduce to integer constant.
//In case we can can either give an integer or character('a'-'z') .
