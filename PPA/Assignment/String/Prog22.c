
/*
	Program 22. Write a program which accept string from user and then reverse the
	string without taking another string (Implement strrev()).

	Input: Hello World
	Output: dlroW olleH
*/

#include<stdio.h>
#include<string.h>

char* mystrrev(char* str) {
	
	for(int i=0;i<strlen(str)/2;i++) {

		char temp = str[strlen(str)-1-i];
		str[strlen(str)-1-i] = str[i];
		str[i] = temp;
	}
	return str;
}
void main() {

	char str[20];
	printf("Enter the string: ");
	scanf("%[^\n]",str);

	mystrrev(str);

	printf("OUTPUT:\n");
	printf("String after reversing is: %s\n",str);
}
