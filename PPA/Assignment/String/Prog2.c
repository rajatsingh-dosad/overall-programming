
/*
	 Program 2. Write a program which accepts a string from user which contains a
	characters from ‘b’ to ‘y’.

	Input: mn jn kn kazfd
	Output: mn jn kn k 
*/

#include<stdio.h>
#include<string.h>

void main() {

	char str[50];
	puts("Enter the string: ");
	fgets(str,sizeof str,stdin);

	puts("OUTPUT:");
	for(int i=0;i<strlen(str);i++) {

		if(str[i] >= 'b' && str[i]<='y' || str[i]==' ')
			printf("%c",str[i]);
		else 
			break;
	}
	puts("");
}

