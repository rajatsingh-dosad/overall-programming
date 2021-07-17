

#include<stdio.h>

void main() {

	float a=5.2;
	

	switch((int)a) {

		case 1:
			printf("One\n");
			break;
		case 5:
			printf("Five\n");
			break;
		case 2:
			printf("Two\n");
			break;
		default:
			printf("else\n");
			break;
	}
}

//Here (int)a converts float number 5.2 to 5
//And as case 5 is present it prints Five as output
