/*	Program 4. Write a Program That Prints Palindrome Series From Entered Range
	Using Nested While Loop.

Input:
Enter Start: 100
Enter End: 200
Output: 101 111 121 131 141 151 161 171 181 191

*/


#include<stdio.h>

void main() {

	int startNo,endNo;

	printf("Enter the starting and ending number: ");
	scanf("%d%d",&startNo,&endNo);

	int i=startNo;
	while(i<=endNo) {
		int reverse=0;
		int num=i;
		while(num!=0) {
			int rem=num%10;
			
			reverse=(reverse*10)+rem;
		
			num=num/10;
		}
		if(i==reverse)
			printf("%d ",reverse);
		i++;
	}
	printf("\n");

	}



