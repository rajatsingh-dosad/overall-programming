
#include<stdio.h>
#include<string.h>

void main() {

	char alpha[20],ch;

	int index = 0;
	
	printf("Enter the string: ");
	while((ch=getchar())!='\n') {

		alpha[index]  = ch;
		index++;
	}
	alpha[index] = '\0';
	
	printf("OUTPUT:\n");
	for(int i=0;i<strlen(alpha);i++) {

		if((alpha[i] >= 'A' && alpha[i] <='Z') || (alpha[i] >='a' && alpha[i] <='z'))
			printf("%c is a alphabet\n",alpha[i]);
		
		else if(alpha[i] >= 48 && alpha[i] <= 57)
			printf("%c is a digit\n",alpha[i]);

		else 
			printf("%c is a special character\n",alpha[i]);
	}
}


