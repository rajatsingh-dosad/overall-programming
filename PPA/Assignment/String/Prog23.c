
/*
	Program 23. Write a program which accept string from user and then reverse the
	string till first N characters without taking another string.

	Input: Hello World 5
	Output: olleH World
*/

#include<stdio.h>
#include<string.h>

char* mystrrev(char* str,int n) {
	
	for(int i=0;i<n/2;i++) {

		char tmp = str[n-1-i];
		str[n-1-i] = str[i];
		str[i] = tmp;
	}
	return str;
}

void main() {

	 char str[20];
	 printf("Enter the string: ");
	 scanf("%[^\n]",str);

	 int num;
	 printf("ENter the number: ");
	 scanf("%d",&num);

	 mystrrev(str,num);

	 printf("OUTPUT:\n");
	 printf("String after reversing %d character is: %s\n",num,str);
}
