
/*
	Program 15. Write a program which accept string from user and copy first N
	charaters into some destination string (Implement strncpy()).
	
	Input: India is my 8
	Output: India is
*/

#include<stdio.h>

char* mystrncpy(char *src,char *des,int n) {

	for(int i=0;i<n;i++) {
		
		*des = *src;
		des++;
		src++;
	}
	*des = '\0';
	return des;
}

void main() {

	char str1[50];
	char str2[50];
	int num;

	printf("Enter the string: ");
	fgets(str1,sizeof str1,stdin);
	
	printf("ENter number of characters to copy: ");
	scanf("%d",&num);

	mystrncpy(str1,str2,num);

	printf("OUTPUT:\n");
	printf("String after copying %d characters is: %s\n",num,str2);
}

