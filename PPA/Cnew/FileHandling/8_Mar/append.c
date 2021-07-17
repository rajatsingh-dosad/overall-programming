
#include <stdio.h>
#include <stdlib.h>

void main() {

	FILE *fp = fopen("one.txt","a");
	if(fp==NULL) {
		puts("Error opening file\n");
		exit(1);
	}
	
	char ch[] = "Rajat hai mera naam";

	int i=0;

	while(ch[i] !='\0') {
	
		fputc(ch[i],fp);
		i++;
	}
	fputc('\n',fp);
}
