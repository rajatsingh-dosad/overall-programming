
/*
	Program 19. Write a program which accept two strings from user and compare two
	strings. If both strings are equal then return 0 otherwise return difference between
	first mismatch character (Implement strcmp()).

	Input: FirStr FirStr
	Output: Both strings are equal.
*/

#include<stdio.h>
#include<string.h>

int mystrcmp(char* str1, char* str2) {
	
	int flag = 0;
	if(strlen(str1) != strlen(str2))
		return strlen(str1)-strlen(str2);
	else {
		for(int i=0;i<strlen(str1);i++) {

			if(str1[i] == str2[i]) {
				continue;
			}
			else {
				return str1[i]-str2[i];
			}
		}
	}
	if(flag == 0)
	       return 0;	
}

void main() {

	char str1[20];
	char str2[20];

	printf("Enter the string1: ");
	scanf("%s",str1);
	
	printf("Enter the string2: ");
	scanf("%s",str2);
	
	int ret = mystrcmp(str1,str2);
	puts("OUTPUT:");
	if(ret == 0)
		printf("Both strings are equal.\n");
	else
		printf("Both strings are not equal.\n");
}

