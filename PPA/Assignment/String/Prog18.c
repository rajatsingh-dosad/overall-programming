
/*
	Program 18. Write a program which accept two strings from user and append N
	characters of second string after first string(Implement strncat()).

	Input: FirStr SecStr 4
	Output: FirStrSecS
*/

#include<stdio.h>
#include<stdlib.h>

char* mystrncat(char* des, char* src, int num) {

	while(*des != '\0') {
		des++;
	}

	for(int i=0;i<num;i++) {

		*des = *src;
		src++;
		des++;
	}
	*des = '\0';
	return des;
}

void main() {

	char str1[20];
	char str2[20];
	int num;
	
	printf("Enter the string1: ");
	scanf("%s",str1);
	
	printf("Enter the strings2: ");
	scanf("%s",str2);
	
	printf("Enter the number: ");
	scanf("%d",&num);

	mystrncat(str1,str2,num);

	printf("OUTPUT:\n");
	printf("String after concating %d characters is : %s\n",num,str1);
}
