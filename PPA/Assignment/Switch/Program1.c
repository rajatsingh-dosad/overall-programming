
#include<stdio.h>

void main() {

	int a=20;

	switch(~a) {

		case 20:
			printf("Case 20\n");
			printf("a=%d\n",a);
			break;
		case -20:
			printf("Case -20\n");
			printf("a=%d\n",a);
			break;
		case -21:
			printf("Case -21\n");
			printf("a=%d\n",a);
			break;
		default:
			printf("Default\n");
			break;
	}
}


//The complement of (~20) is -21 and value of a is 20.
//so first case is false so it goes to the next line 
//(~20) is -21 and the second case is true so it executes the second case.
