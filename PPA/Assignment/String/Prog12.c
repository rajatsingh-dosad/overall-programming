
/*
	Program 12. Write a program which toggles the case of a string.

	Input: DevIce DriVer
	Output: dEViCE dRIvER
*/

#include<stdio.h>
#include<string.h>

void main() {

	char str[20];
	printf("Enter the string: ");
	scanf("%[^\n]",str);

	for(int i=0;i<strlen(str);i++) {

		if(str[i] >= 'a' && str[i] <='z')
			str[i] = str[i] - 32;
		
		else if(str[i] >= 'A' && str[i] <='Z')
			str[i] = str[i] + 32;
	}

	printf("OUTPUT: ");
	puts(str);
}
