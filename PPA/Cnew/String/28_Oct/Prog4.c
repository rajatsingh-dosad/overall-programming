
#include<stdio.h>
#include<string.h>

char* mystrcat(char *src,char *dest) {
	
	while(*src != '\0') {

		src++;
	}

	while(*dest != '\0') {

		*src = *dest;
		src++;
		dest++;
	}
	*src = '\0';
	return src;
}

void main() {

	char str1[20] = "Core2Web";
	char str2[20] = "Technologies";

	puts(str1);			//Core2Web
	puts(str2);			//Technologies

	mystrcat(str1,str2);
	
	puts(str1);			//Core2WebTechnologies
	puts(str2);			//Technologies
 
}
