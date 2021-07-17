/*Program 1: Write a C program that takes the radius of a circle as input from the user,
and calculates it’s Area and Circumference.
Input: Radius: 4
Output:
Area of Circle: 50.24
Circumference of Circle: 25.12*/





#include<stdio.h>

void main() {
	
	int radius;			
	float Area;
	float circumference;
	
	printf("Enter the radius of the circle\n");			//take input from user
	scanf("%d",&radius);						//4
	
	Area=3.14*radius*radius;					//applied formula for "Area of Circle" 
	circumference=2*3.14*radius;					//applied formula for "Circumference of circle"
	
	printf("Area of circle: %.2f\n",Area);				//Printing Value of Area (I have used %.2f to print only two numbers after decimal point)
	printf("Circumference of circle: %.2f\n",circumference);	//Printing Value of Circumference (I have used %.2f to print only two numbers after decimal point)

	
	}
	
	
	
	




