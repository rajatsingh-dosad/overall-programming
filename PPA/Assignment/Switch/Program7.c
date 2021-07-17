

#include<stdio.h>

void main() {

	int a;

	switch(a=(sizeof(int)>-1)) {

		case 1:
			printf("True\n");
			break;

		case 0:
			printf("False\n");
			break;
	}
}
/**/
