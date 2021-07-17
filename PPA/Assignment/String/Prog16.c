
/*
	Program 16. Write a program which accept string from user and accept number N
	then copy last N character into some another string.

	Input: India is my 5
	Output: is my
*/

#include<stdio.h>
#include<string.h>

void main() {

	char str[50];
	char cpyy[50];
	printf("Enter the string: ");
	fgets(str,sizeof str, stdin);

	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	int i=0;
	for(;i<num;i++) {

		cpyy[i] = str[(strlen(str)-1)-num+i];
	}
	cpyy[i] = '\0';

	printf("OUTPUT: ");
	printf("%s\n",cpyy);
}





