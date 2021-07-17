
/*
	Program 24. Write a program which accept string from user and then reverse the
	string till last N characters without taking another string.

	Input: Hello World 5
	Output: Hello dlroW
*/

#include<stdio.h>
#include<string.h>

char* mystrrev(char* str, int num) {
	int j=0;
	for(int i=strlen(str)-num; i <= strlen(str)-1 - (num/2); i++) {

		char tmp = str[strlen(str)-1-j];
		str[strlen(str)-1-j] = str[i];
		str[i] = tmp;
		j++;
	}
	return str;
}
void main() {

	char str[20];
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	mystrrev(str,num);

	printf("OUTPUT:\n");
	printf("String after reversing last %d character is : %s\n",num,str);
}
