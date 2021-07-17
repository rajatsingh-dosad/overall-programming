/*Program 3: Write a C Program which takes a number as input from user if number is
even print that number in reverse order to 1 and if the number is odd print that
number in reverse order by difference two to 1.
Input: 6
Output: 6 5 4 3 2 1
or
Input: 7
Output: 7 5 3 1.  */

#include<stdio.h>

void main() {

	int num;

	printf("Enter a number: ");
	scanf("%d",&num);		//input number from user

	if(num%2==0) {			//checking first number is even or odd
		while(num>=1) {		//while loop and condition
			printf("%d ",num);
		       	num--;		//if even decrement by 1
		}
	}
	else {				//else odd
		while(num>=1) {		//condition
			printf("%d ",num);
		       	num-=2;		//decrement by 2

	}
	}
	printf("\n");
}


