
/*
	Program 10. Write a program to convert the string from upper case to lower case
	(Implement strlwr()).

	Input: DevIce DriVer
	Output: device driver
*/

#include<stdio.h>
#include<string.h>
char* mystrlwr(char str[]) {
	
	for(int i=0;i<strlen(str)-1;i++) {

		if(str[i] >= 'a' && str[i] <='z')
			continue;
		
		else if(str[i] >= 'A' && str[i] <='Z')
			str[i] = str[i] + 32;
	}
	return str;
}
void main() {

	char str[20];
	printf("Enter the string: ");
	fgets(str,sizeof str,stdin);

	printf("OUTPUT:");
	printf("%s\n",mystrlwr(str));
}


