/*Program 4: Write a program that accepts integer input from user and print if it is
prime number or not.
(Note: A prime number is such a number which is only divisible 1 & that number
itself)
Input: 5
Output: 5 is a Prime Number.      */


#include<stdio.h>

void main() {

	int n,count=0;		
	printf("Enter a number: ");
	scanf("%d",&n);			//taking number from user

	for(int i=1;i<=n;i++)  {	//for loop from 1 to n

		if(n%i==0) {		//checking number is divisible by i
	}		count++;	//if divisible increment count variable
		
	
		

	if(count==2)			//count =2 because 1 and the number itself is confirmed so if count var is >2 it is not a prime no.	}

		printf("%d is a prime number\n",n);
	else
		printf("%d is not a prime number\n",n);

	


}

