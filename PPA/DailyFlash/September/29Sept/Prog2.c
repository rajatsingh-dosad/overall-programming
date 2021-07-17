
#include<stdio.h>

void main() {
	
	char c1,c2;
	printf("Enter the 2 characters: ");
	scanf("%c %c",&c1,&c2);		//a b

	char *cptr1 = &c1;	
	char *cptr2 = &c2;

	printf("%p\n",cptr1);	//100
	printf("%p\n",cptr2);	//101
	
	printf("%c\n",*cptr1);	//a
	printf("%c\n",*cptr2);	//b
	
	cptr1 = cptr1 + 1;	//100+1(sizeof datatype of pointer) = 100+1(1) = 101
	cptr2 = cptr2 + 1;	//101+1(sizeof datatype of pointer) = 101+1(1) = 102

	printf("%p\n",cptr1);	//101
	printf("%p\n",cptr2);	//102
	
	printf("%c\n",*cptr1);	//b
	printf("%c\n",*cptr2);	//character which is at address 102
}


