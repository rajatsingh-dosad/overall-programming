/*Program 3. Write a C Program that print Fahrenheit-to-Celsius conversion table for 0
to 100 degree F.   */

#include<stdio.h>

void main() {

	int i=0;
	float celsius;
	printf("\nFehrenheit \t Celsius\n");
	
	while(i<=100) {				//condition
	
		celsius=(float)(i-32)*5/9;	//formula for fahreneit to celsius
		printf("\n   %d \t\t  %.2f\n",i,celsius);
		i++;
	}
}
