
#include <stdio.h>
#include <string.h>

void main() {

	FILE *fp = fopen("info4.txt","w");
	char s[80];

	printf("Enter few lines\n");
	while(strlen(gets(s)) > 0) {

		fputs(s,fp);
		fputs("\n",fp);
		
	}
	fclose(fp);

}
