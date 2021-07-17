
/*
 	Program 6. Write a program which accept sentence from user and print number of
	words from that sentence.

	Input: In my company
	Output: 3 
*/

#include<stdio.h>
#include<string.h>

void main() {

	char str[20];

	printf("Enter the sentence: ");
	fgets(str,sizeof str,stdin);

	int count = 1;

	for(int i=0;i<strlen(str);i++) {

		if(str[i] == ' ')
			count++;
	}

	printf("OUTPUT: ");
	printf("%d\n",count);
}
