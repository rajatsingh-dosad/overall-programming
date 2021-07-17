/*Program 3: What does the following C statement mean write detailed explanation?
scanf("%7s", str);   */



/*Ans) The statement is like controlling the input .Here it means it will only take maximum 7 charcters and if entered more it will only print 7 as demontrated in below program.*/



#include<stdio.h>

void main() {

	char ch[10];

	printf("Enter the string: ");
	scanf("%7s",ch);

	printf("%s\n",ch);
}
