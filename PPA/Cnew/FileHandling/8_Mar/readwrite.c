
#include <stdio.h>
#include <stdlib.h>


void main() {

	FILE *fp = fopen("one.txt","r+");

	char c[] = "Shubham is a good boy";
	char ch;
	int i=0;

	if(fp==NULL) {
		puts("Cannot open file\n");
		exit(1);
	}

	while(c[i]!='\0') {

		fputc(c[i],fp);
		i++;
	}
	printf("\n");
	
}

