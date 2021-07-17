
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	
	FILE *s = fopen("image.png","rb");
	FILE *t = fopen("two.png","wb");
	int ch;

	if(s==NULL || t==NULL) {

		puts("Cannot open file");
		exit(1);
	}

	while(1) {

		ch = fgetc(s);
		if(ch==EOF)
			break;
		else
			fputc(ch,t);

	}
	fclose(s);
	fclose(t);
}
