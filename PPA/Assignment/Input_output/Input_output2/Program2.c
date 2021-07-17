/*Program 2: Write a C Program to take character from user and print whether it's in
upper case or in lower case.
Input: A
Output: Entered character is UPPERCASE character    */


#include<stdio.h>

void main() {


	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);

	if(ch>=65 && ch<=90)						//We are comparing the ascii value of the characters(Uppercase 65-90)
		printf("Entered character is Uppercase character\n");
	else if(ch>=97 && ch<=122)					//Lowercase 97-122
		printf("Entered character is Lowercase character\n");
}

