

#include<stdio.h>

void main() {

	int a=5,b=3;

	switch(a) {

		case 1:
			printf("One\n");
		case 5:
			printf("Two\n");
		case b:
			printf("Three\n");
		case 'a':
			printf("Four\n");
		default:
			printf("Default\n");
	}
}

/*Here case b: will give error as it cannot reduce to integer constant. We can either give an integer or a character. If case 'b': would be written like this then output would be
 Two
 Three
 Four
 Default
 */		
		
		
		
		

