
/*
  	Program 4. Write a program which accept sentence from user and print length of
	that sentence (Implement strlen()).
	
	Input: India is my
	Output: 11 

*/

#include<stdio.h>

long mystrlen(char* str) {

	int count = 0;
	while(*str != '\0') {
		
		count++;
		str++;
	}
	return count;	
}
void main() {

	char str[20];
	printf("Enter the sentence: ");
	fgets(str,sizeof str,stdin);
	
	printf("OUTPUT: ");
	printf("%ld\n",mystrlen(str)-1);
}


