
#include<stdio.h>

void main() {
	
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);

	if(ch>='A' && ch<='Z')
		printf("Letter %c is in Uppercase.\n",ch);
	else if(ch>='a' && ch<='z')
		printf("Letter %c is in Lowercase.\n",ch);
	else
		printf("U did not entered a character\n");
}

