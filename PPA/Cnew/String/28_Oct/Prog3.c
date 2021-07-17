
#include<stdio.h>

char* mystrcpy(char *dest,char *src) {

	while(*src!='\0') {

		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return dest;
}
void main() {

	char *str1 = "Bielearn";

	char str2[20];

	puts(str1);	//Bielearn
	puts(str2);	//Blank

	mystrcpy(str2,str1);
	
	puts(str1);	//Bielearn
	puts(str2);	//Bielearn
}
