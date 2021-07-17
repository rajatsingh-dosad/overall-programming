
/*
	Program 13. Write a program to check whether given strings are Anagram strings or
	not.

	Input: abccd cbcda
	Output: Strings are anagram
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main() {

	char str1[20];
	char str2[20];

	printf("Enter the string1: ");
	fgets(str1,sizeof str1,stdin);

	printf("Enter the string2: ");
	fgets(str2,sizeof str2,stdin);
	
	int flag;
	if(strlen(str1) != strlen(str2))
		printf("Strings are not anagram\n");

	else {
		for(int i=0;i<strlen(str1);i++) {
			flag = 0;
			int j = 0;
			for(;j<strlen(str2);j++) {

				if(str1[i] == str2[j]) {
					flag = 1;
					break;
				}
				else
					flag = 0;

			}
			if(flag == 1) {
				str2[j] = '#';
			}
			else if(flag==0) {

				printf("Strings are not anagram\n");
				exit(1);
			}

				
		}
		printf("String are anagram\n");
	}

}

