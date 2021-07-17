

#include<stdio.h>

void main() {

	char ch = 'v';

	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
			printf("%c is an alphabet\n",ch);
	else		
			printf("%c is not an alphabet\n",ch);
}
			

