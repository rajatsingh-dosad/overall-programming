

#include<stdio.h>

void main() {

	int x=2;

	switch(x<< (x+1)) {

		default:
			printf("\ndefault");

		case 1:
			printf("\n1");
			break;
		case 2:
			printf("\n2");
			break;
		case 3:
			printf("\n3");
			break;
		case 4:
			printf("\n4");
			break;
		case 8:
			printf("\n8");
			break;
		}
}

/*here (x<<(x+1)) is 16 so none of our cases is satisfied so it executes default but as default doesn't have break it prints the next printf statement
	also and stops as it has a break.
*/
