
/*
 	Program 7. Write a program which accept sentence from user and print number of
	words of even and odd length from that sentence.

	Input: In my company
	Output: Even: 2 Odd:1 
*/

#include<stdio.h>
#include<string.h>

void main() {

	char str[20];
	printf("Enter the sentence: ");
	scanf("%[^\n]",str);

	int even = 0;
	int odd = 0;
	int count ;
	for(int i=0;i<strlen(str);i++) {
		count = 0;
		while(str[i]!= ' ') {
			

			if(str[i] == '\0') {
				break;
			}
			else {
				i++;
				count++;
			}
		
		}
		
		printf("%d\n",count);
		if(count % 2 != 0)
			odd++;
		else 
			even++;
	}
	printf("OUTPUT: ");
	printf("Even:%d  Odd:%d\n",even,odd);
}



