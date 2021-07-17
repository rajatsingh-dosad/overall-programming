
#include<stdio.h>
#include<string.h>

void main() {

	char carr[20],ch;
	int index = 0;

	printf("Enter the string: ");
	while((ch=getchar())!='\n') {

		carr[index] = ch;
		index++;
	}
	carr[index] = '\0';
	
	puts("OUTPUT:");
	for(int i=0;i<strlen(carr);i++) {

		if(carr[i] >= 'A' && carr[i] <='Z')
			printf("%c",carr[i]);

		else if(carr[i] >= 'a' && carr[i] <='z')
			printf("%c",carr[i]-32);
		else 
			printf("%c",carr[i]);
	}
	printf("\n");
		
}
