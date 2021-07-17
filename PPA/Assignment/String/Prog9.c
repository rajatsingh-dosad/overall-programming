
/*
	Program 9. Write a program which accept sentence from user and position from user
	and print the word at that position.

	Input: is my he she 3
	Output: he
*/

#include<stdio.h>
#include<string.h>

void main() {

	char str[50];
	int pos;

	printf("ENter the sentence: ");
	fgets(str,sizeof str,stdin);
	
	printf("Enter the position: ");
	scanf("%d",&pos);
	
	int count = 1;
	int index = 0;
	
	printf("OUTPUT: ");
	for(int i=0; str[i] != '\0' ;i++) {
		
		
		if(pos == count) {

			index = i;
			break;
		}
		if(str[i] == ' ')
			count++;
		if(pos == count) {
			index = i;
			break;
		}

		
	}
	
	for(int i=index+1 ; i<strlen(str)-1 ; i++) {
		
		if(str[i] == ' ')
			break;
		else
			printf("%c",str[i]);
	}
		
		
	printf("\n");
}
