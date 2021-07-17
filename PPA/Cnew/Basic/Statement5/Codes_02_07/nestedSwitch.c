
#include<stdio.h>

void main() {

	char ch = '=';

	switch(ch) {

		case '<':
			{
				int a = 5;
				int y = 0;

				switch(a && y) {

					case 0:
						printf("False\n");
						break;
					case 1:
						printf("True\n");
						break;
				}
			}break;

		case '>':
			{
				int p = 5;
				int q = 0;

				switch(p || q) {

					case 0:
						printf("False\n");
						break;
					case 1:
						printf("True\n");
						break;
				}
			}break;
		default:
		printf("In default case\n");

	}
}


