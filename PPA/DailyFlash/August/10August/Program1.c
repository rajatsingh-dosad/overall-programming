/*	Program 1. Write a program that print the datatype of variables using if-else Ladder.
	Take int, char, and float type variable and gives hardcoded value for those variables.
	Take 1 variable, and use if-else ladder and print the datatype of that variable.
	Same for other variables.

Input: char a = 'A';
Output: variable is of Char datatype.

Note: don't give direct variable name to if-else ladder or don't compare values inside
if-else ladder condition.
char ch = 'A'
if(ch)
printf(variable is of Char datatype);

Hint :- Use sizeof Operator.*/

#include<stdio.h>
#include<string.h>

void main() {

	int ivar = 10;
	char cvar = 'A';
	float fvar = 20.52;

	if(sizeof(cvar)==4) {
		char a[20]={cvar};
	
		int length = strlen(a);
		for(int i=1;i<=length;i++) {
			if(a[i]=='.') 
				printf("Variable is of float type.\n");
			else
				printf("Variable is of int type.\n");
		}
	}
	else if(sizeof(cvar)==1)
		printf("Variable is of character type.\n");
}




