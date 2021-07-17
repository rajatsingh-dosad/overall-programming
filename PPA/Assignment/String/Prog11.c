
/*
	Program 11.  Write a program to convert the string from lower case to upper case
	(Implement strupr()).

	Input: DevIce DriVer
	Output: DEVICE DRIVER
*/

#include<stdio.h>
#include<string.h>

char* mystrupr(char str[]) {
	
	for(int i=0;i<strlen(str)-1;i++) {

		if(str[i] >= 'A' && str[i] <='Z')
			continue;
		
		else if(str[i] >= 'a' && str[i] <='z')
			str[i] = str[i] - 32;
	}
	return str;
}
void main() {

	char str[20];
	printf("Enter the string: ");
	fgets(str,sizeof str,stdin);

	printf("OUTPUT:");
	printf("%s\n",mystrupr(str));
}


