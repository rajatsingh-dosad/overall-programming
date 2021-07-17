/*Write a Program to check whether the number N Entered by ranges between
25 to 50, Print the appropriate statements.*/

#include<stdio.h>

void main() {
	int x;
	printf("Enter the number.\n");
	scanf("%d",&x);			//for eg user enters 35

	if(x>=25 && x<=50) {		//here condition satisfies like 35 is greater than 25 and less than 50
		printf("%d Belong to the range between 25 to 50\n",x);	//prints this statement
	}

	else {
		printf("%d Doesn't belong the range between 25 to 50\n",x);


	}
}
