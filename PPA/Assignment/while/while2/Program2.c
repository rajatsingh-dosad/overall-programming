/*Program 2: .Write a C Program to print the character is vowel or consonant from ‘A’
to ‘Z’. Take the lower bound & upper bound of characters range from user.
Input:
Lower Bound of Range: C
Upper Bound of Range: F
Output:
C is Consonant
D is Consonant
E is Vowel
F is Consonant   */


#include<stdio.h>

void main() {

	char lower_bound;
	char upper_bound;

	printf("Lower Bound of Range: ");
	scanf("%c",&lower_bound);		//taking starting alphabet

	printf("Upper Bound of Range: ");
	scanf(" %c",&upper_bound);		//taking ending alphabet

	while(lower_bound<=upper_bound) {	//condition 

		if(lower_bound=='A' || lower_bound=='E' || lower_bound=='I' || lower_bound=='O' || lower_bound=='U') //condition for vowel
			printf("%c is Vowel\n",lower_bound);
		else 
			printf("%c is Consonant\n",lower_bound);	//consonant
		lower_bound++;
	}
}


