

#include<stdio.h>

void main() {

	char ch = '*';

	if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
		printf("%c is an alphabet\n",ch);
	else if(ch>=48 && ch<=57)
		printf("%c is an Digit\n",ch);
	else
		printf("%c is a Special Character\n",ch);
}
