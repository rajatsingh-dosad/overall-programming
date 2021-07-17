
/*
 
	Program 5. Write a program which accept sentence from user and print number of
	white spaces from that sentence.
	
	Input: In my company
	Output: 2
*/

#include<stdio.h>
#include<string.h>

void main() {

	char str[20];
	printf("Enter the sentence: ");
	fgets(str,sizeof str,stdin);
	
	int count = 0;
	for(int i=0;i<strlen(str);i++) {

		if(str[i] == ' ')
			count++;
	}

	printf("OUTPUT: ");
	printf("%d\n",count);
}
