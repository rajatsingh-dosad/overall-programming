

#include<stdio.h>
#include<math.h>

void main() {

	int side1, side2, hypo=0,s=0;

	printf("Enter the two side of triangle and hypotenuse: ");
	scanf("%d%d%d",&side1,&side2,&hypo);
	
	s=side1*side1+ side2*side2;
	
	if(sqrt(s) == hypo)
		printf("Triangle satisfies the Pythagorean Theorem\n");
	else
		printf("Triangle does not satisfies the Pythagorean Theorem\n");
}


	
