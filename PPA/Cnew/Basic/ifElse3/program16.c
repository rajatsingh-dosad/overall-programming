/*Write a Program that detects whether the entered character is UPPER CASE,
lower case or a Special Character.*/


#include<stdio.h>

void main() {

	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);

	if(ch>=65 && ch<=90) {
		printf("U entered a Upper case\n");
	}

	else if(ch>=97 && ch<=122) {
		printf("U entered a lowercase\n");
	}

	else if(ch>=48 && ch<=57) {
		printf("U entered a digit\n");
	}

	else {
		printf("U entered a special character\n");
	}
}

//In this program we are using the ascii value of charcters
//A-Z ranges from 65-90
//a-z ranges from 97-122
//0-9 ranges from 48-57
//Rest are special charcters



