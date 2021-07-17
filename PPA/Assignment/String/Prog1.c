/*
 	Program 1. Write a program which accept sentence from user and print that
	sentence.

	Input: My name is
	Output: My name is
*/

#include<stdio.h>

void main() {

	char str[50];
	printf("Enter the string: ");
	fgets(str,sizeof str,stdin);

	printf("OUTPUT:\n");
	puts(str);
}
