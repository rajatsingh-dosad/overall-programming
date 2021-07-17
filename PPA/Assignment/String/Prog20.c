
/*
	Program 20. Write a program which accept two strings from user and compare only
	first N characters of two strings. If both strings are equal till first N characters then
	return 0 otherwise return difference between first mismatch character (Implement
	strncmp()).

	Input: FirStr FirNew 3
	Output: Both strings are equal.
*/

#include<stdio.h>
#include<string.h>

int mystrncmp(char* str1, char* str2, int n) {
	
	int flag = 0;
	if(strlen(str1) != strlen(str2) )
			return strlen(str1)- strlen(str2);
	else {
		for(int i=0;i<n;i++) {

			if(str1[i] == str2[i])
				continue;
			else
				return str1[i]-str2[i];
		}
	}

	if(flag==0)
		return 0;
}
void main() {

	char str1[20];
	char str2[20];
	int num;

	printf("Enter the string1: ");
	scanf("%s",str1);
	
	printf("Enter the string2: ");
	scanf("%s",str2);

	printf("Enter the number: ");
	scanf("%d",&num);
	
	int ret = mystrncmp(str1,str2,num);

	if(ret == 0) 
		printf("Both strings are equal\n");
	else 
		printf("Both strings are not equal\n");
}
