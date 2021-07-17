
/*
	Program 17. Write a program which accept two strings from user and append second
	string after first string(Implement strcat()).

	Input: FirStr SecStr
	Output: FirStrSecStr
*/

#include<stdio.h>

char* mystrcat(char* str1,char* str2) {
	
	while(*str1 != '\0') {

		str1++;
	}
	str1--;

	while(*str2 != '\0') {

		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return str1;
}

void main() {
	
	char str1[20];
	char str2[20];

	printf("Enter the string:\n");
	fgets(str1,sizeof str1,stdin);

	fgets(str2,sizeof str2,stdin);

	mystrcat(str1,str2);

	printf("OUTPUT:\n");
	printf("String after concating is: %s\n",str1);

}




