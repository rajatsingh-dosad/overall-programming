
#include<stdio.h>

void square() {
	int side;
	printf("Enter the side of square: ");
	scanf("%d",&side);

	printf("Area of square = %d\n",side*side);
}

void circle() {
	int r;
	printf("Enter the radius of circle: ");
	scanf("%d",&r);

	printf("Area of circle = %f\n",3.142*r*r);
}

void rectangle() {

	int l,b;
	printf("Enter the length and breadth of rectangle: ");
	scanf("%d%d",&l,&b);

	printf("Area of rectangle = %d\n",l*b);
}

void triangle() {

	int b,h;
	printf("Enter the base and height of triangle: ");
	scanf("%d%d",&b,&h);

	printf("Area of triangle = %d\n",(b*h)/2);
}



void main() {
	
	int choice;
	char agree = 'y';
	void (*fptr)() = 0;
	do {
		printf("1) Square\n2) Circle\n3) Rectangle\n4) Triangle\n");
		printf("Enter your choice:");
		scanf("%d",&choice);

		switch(choice) {

			case 1:
				fptr = square;
				fptr();
				break;
			case 2:
				fptr = circle;
				fptr();
				break;
			case 3:
				fptr = rectangle;
				fptr();
				break;
			case 4:
				fptr = triangle;
				fptr();
				break;
			default: 
				printf("You entered a wrong choice\n");
		}

		printf("\nDo you want to continue(y/n): ");
		scanf(" %c",&agree);
	}while(agree=='y');
}


