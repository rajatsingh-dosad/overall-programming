
#include<stdio.h>

void main() {

	int ang1, ang2, ang3;

	printf("Enter the three angle of a triangle: ");
	scanf("%d%d%d",&ang1,&ang2,&ang3);

	if(ang1+ang2+ang3==180)
		printf("The triangle with angle %d %d & %d is a valid one.\n",ang1,ang2,ang3);
	else
		printf("The triangle with angle %d %d & %d is not a valid one.\n",ang1,ang2,ang3);
}

