
#include <stdio.h>

#define rectangle(a,b) {printf("The area of the rectangle is: %d\n",a*b);\
			printf("The perimeter of rectangle is: %d\n",2*(a+b));\
			}

void main() {
	
	int len,breadth;
	
	printf("Enter the length and breadth of the rectangle: ");
	scanf("%d %d",&len,&breadth);

	rectangle(len,breadth);
}
