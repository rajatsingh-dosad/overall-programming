
/*
	Program 8. Write a program which accept sentence from user and print last word
	from that sentence.

	Input: In my company
	Output: company 
*/

#include<stdio.h>
#include<string.h>

void main() {

	char str[50];
	printf("Enter the string: ");
	fgets(str,sizeof str,stdin);
		
	int count = 0;
	int index;
	for(int i=0; str[i] != '\0'; i++) {
		
		if(str[i] == ' ') {
			count++;
			index = i;
		}	
	}
	
	puts("OUTPUT:");
	for(int i=index+1;str[i] != '\0'; i++) {

		printf("%c",str[i]);
	}
	printf("\n");

}


