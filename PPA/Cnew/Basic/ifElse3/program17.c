/*Write a Program that accepts three Integers from user then finds largest
number amongst them as well as it should print whether the largest number amongst them
is odd or even.*/

#include<stdio.h>

void main() {
	int a,b,c;
	printf("Enter the theree number:");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b && a>c) {	//if this condition satisfies than it goes to below if
		if(a%2==0) {	//This condition check if it is even if condition is true than it prints below statement 
			printf("%d is largest number amongst %d, %d and %d and  %d is an even number.\n",a,a,b,c,a);
		}
		else{
			printf("%d is largest number amongst %d, %d and %d and %d is an odd number.\n",a,a,b,c,a);
		}

	}
	if(b>a && b>c) {	//if this condition satisfies than it goes to below if
		if(b%2==0) {	//if condition is true than it prints below statement
			printf("%d is largest number amongst %d, %d and %d and  %d is an even number.\n",b,a,b,c,b);
		}
		else{
			printf("%d is largest number amongst %d, %d and %d and %d is an odd number.\n",b,a,b,c,b);
		}
	}

	if(c>a && c>b) {	//if this condition satisfies than it goes to below if
		if(c%2==0) {	//if condition is true than it prints below statement

			printf("%d is largest number amongst %d, %d and %d and  %d is an even number.\n",c,a,b,c,c);
		}
		else{
			printf("%d is largest number amongst %d, %d and %d and %d is an odd number.\n",c,a,b,c,c);
		}


}
}


