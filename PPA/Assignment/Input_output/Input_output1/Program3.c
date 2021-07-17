/*Program 3: Write a C Program that accepts a character from user and prints whether
that character is a consonant or a vowel.
Input: Enter Character: a
Output: a is a vowel		*/


#include<stdio.h>

void main() {

	char ch;

	printf("Enter a character:");
	scanf("%c",&ch);		//taking character from user

	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {  //We are checking for both capital and small character as Vowel

		printf("%c is a vowel\n",ch);	//print if condition is true
	}
	else {
		printf("%c is a consonent\n",ch); //print if condition is false
	}
}

