/*Program 5. Write a program to print the count of even numbers which are divisible
by 5 from 1 to 50 .
Output: 10 ,20 ,30 ,40 ,50  */

#include<stdio.h>

void main() {

	int i=1;
	int count=0;

	while(i<=50) {			//condition

		if(i%2==0 && i%5==0)	//checking whether number is even and divisible by 5
			printf("%d ,",i);	//printing
		i++;			//increment
	}
	printf("\n");			
	
}
