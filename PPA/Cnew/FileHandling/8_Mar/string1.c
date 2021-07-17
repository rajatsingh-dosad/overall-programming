
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {

	FILE *fp = fopen("two.txt","w");
	char s[80];

	if(fp==NULL) {

		puts("Cannot open file\n");
		exit(1);
	}
	
	int num = 0;
	printf("Enter the content you want to add to new file:\n");
	while(strcmp(gets(s)," ")) {
			
		fputs(s,fp);
	}
	
}
