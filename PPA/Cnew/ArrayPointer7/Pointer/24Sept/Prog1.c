
#include<stdio.h>

void main() {

	char ch[] = {'A','B','C','D'};
	char *cptr = ch;

	cptr =2 +  cptr ;
	printf("%c\n",*cptr);
}
