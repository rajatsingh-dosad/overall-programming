
#include<stdio.h>

void main() {

	char carr[5] = {'A','B','C','D','E'};

	char *cptr = carr;
	int  *iptr = carr;

	printf("%c\n",*cptr);	//A
	printf("%c\n",*iptr);	//A

	printf("%p\n",cptr);	//300
	printf("%p\n",iptr);	//300

	cptr = cptr + 1;
	iptr = iptr + 1;

	printf("%c\n",*cptr);	//A
	printf("%c\n",*iptr);	//E

}
