
/*
 	Program 3. Write a program which accept sentence from user and print number of
	small letters, capital letters and digits from that sentence.
	
	Input: abcDE 5Glm1 O
	Output: Small:5 Capital: 4 Digits: 2 

*/

#include<stdio.h>
#include<string.h>

void main() {

	char str[40];
	int smLetter = 0;
	int cpLetter = 0;
	int digit = 0;
	printf("Enter the sentence: ");
	fgets(str,sizeof str,stdin);

	for(int i=0;i<strlen(str);i++) {
		
		if(str[i] >='a' && str[i] <='z')
			smLetter++;
		else if(str[i] >='A' && str[i] <='Z')
			cpLetter++;
		else if(str[i] >= 48 && str[i] <= 57)
			digit++;
	}


	puts("OUTPUT:");
	printf("Small:%d  Capital:%d  Digits:%d\n",smLetter,cpLetter,digit);
}
