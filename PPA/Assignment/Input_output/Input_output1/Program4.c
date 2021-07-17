/*Program 4: Write a C program that accepts input of every data type (one of each)
from user and prints them.
Input: Enter an Integer value: 10
Output: Entered Integer Value is 10    */


#include<stdio.h>

void main() {

	int int_val;
	float float_val;
	double double_val;
	char char_val;
	long long_val;
	short short_val;

	printf("Enter an integer value:");	
	scanf("%d",&int_val);			//Taking input for integer(format specifier is %d)
	
	printf("Enter an float value:");
	scanf("%f",&float_val);			//Input for float(format specifier is %f)
	
	printf("Enter an double value:");
	scanf("%lf",&double_val);		//Input for double(format specifier is %lf)
	
	printf("Enter an character:");
	scanf(" %c",&char_val);			//Input for character(format specifier is %c)
	
	printf("Enter long value:");
	scanf("%ld",&long_val);			//Input for long(format specifier is %ld)
	
	printf("Enter an short value:");
	scanf("%hi",&short_val);		//Input for short(format specifier is %hi for signed value)
	
	printf("******************************************************************\n");

	printf("Entered Integer value is %d\n",int_val);
	printf("Entered float value is %f\n",float_val);
	printf("Entered Double value is %lf\n",double_val);
	printf("Entered character is %c\n",char_val);
	printf("Entered Long value is %ld\n",long_val);
	printf("Entered Short value is %hi\n",short_val);
}
