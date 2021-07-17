
#include<stdio.h>

void main() {

	float m , v;
	printf("Enter the mass and velocity : ");
	scanf("%f%f",&m,&v);

	float k =  (m * v * v)/2;

	printf("Kinetic Energy of that object is: %.1f \n",k);
}	
