
/*
	Program 14. Write a program which accept string from user and copy that string into
	some another string (Implement strcpy()).
*/

#include<stdio.h>

char* mystrcpy(char* src, char* des) {

	while(*src != '\0') {

		*des = *src;
		des++;
		src++;
	}
	*des = '\0';
	return des;
}

void main() {

	char str1[20];
	char str2[20];

	printf("Enter the string: ");
	fgets(str1,sizeof str1,stdin);

	mystrcpy(str1,str2);

	puts("OUTPUT: ");
	printf("After copying string in str2 is : %s\n",str2);
 }
