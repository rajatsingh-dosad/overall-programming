
/*
	Program 25. Write a program which accept string from user and then accept range
	and reverse the string in that range without taking another string.

	Input: Hello World 3 8
	Output: HeoW ollrld
*/

#include<stdio.h>
#include<string.h>

char* mystrrev(char* str, int n1, int n2) {
	
	int j=0;
	for(int i=n1-1 ;i< ((n1+n2)-1)/2;i++) {

		char tmp = str[n2-1-j];
		str[n2-1-j] = str[i];
		str[i] = tmp;
		j++;
	}
	return str;
}

void main() {

	char str[20];
	printf("ENter the string: ");
	scanf("%[^\n]",str);

	int n1,n2;
	printf("Enter the range to reverse: ");
	scanf("%d %d",&n1,&n2);

	mystrrev(str,n1,n2);

	printf("OUTPUT:\n");
	printf("String after reversing from %d to %d is: %s\n",n1,n2,str);
}
