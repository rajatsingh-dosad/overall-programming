
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) {
	
	char ch;
	if(argc != 3) {

		puts("Incorrect number or arguments");
		exit(1);
	}

	FILE *fp1 = fopen(argv[1],"r");
	if(fp1 == NULL) {

		puts("Cannot open source file");
		exit(2);
	}

	FILE *fp2 = fopen(argv[2],"w");
	if(fp2 == NULL) {

		puts("Cannot open target File");
		fclose(fp1);
		exit(3);
	}

	while((ch=fgetc(fp1)) != EOF) {

		fputc(ch,fp2);
	}
	fclose(fp2);

	return 0;	
} 
