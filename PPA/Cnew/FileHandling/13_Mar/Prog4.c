
#include <stdio.h>
#include <stdlib.h>

void main() {

	char ch;
	FILE *fp = fopen("one.txt","w");

	if(fp==NULL) {

		puts("Cannot open file");
		exit(1);
	}

	while(!feof(fp)) {

		ch = fgetc(fp);
		printf("%c",ch);
	
	}
	fclose(fp);
}
