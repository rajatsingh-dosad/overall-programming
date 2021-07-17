

#include<stdio.h>

void main() {

	int x, y;
	int choice;
	
	printf("Enter the two number:\n");
	scanf("%d %d",&x,&y);

	printf("Enter your choice\n");
	printf("1:Add\n2:Subtract\n3:Multiplication\n4:Division\n");
	
	scanf("%d",&choice);
	
	switch(choice) {

		case 1:
			printf("Add=%d\n",x+y);
			break;

		case 2:
			printf("Sub=%d\n",x-y);
			break;

		case 3:
			printf("Mul=%d\n",x*y);
			break;

		case 4:
			printf("Div=%d\n",x/y);
			break;

		default:
			printf("Wrong choice\n");
			break;



	}
	printf("Out of switch\n");
}
