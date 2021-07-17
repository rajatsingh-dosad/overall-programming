/*Write a Program that check whether the entered character by user is vowel or
Consonant.*/


#include<stdio.h>

void main() {

	char ch;

	printf("Enter the charcter:");	//Vowels are a,e,i,o,u
	scanf("%c",&ch);		//Here user can enter a capital letter or small letter

	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
	//If character is amongst above character than it prints below statement.	
		printf("It's a vowel\n");
	}

	else {
		printf("It's a consonant\n");
	}
}










