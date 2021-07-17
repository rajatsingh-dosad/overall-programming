
#include<stdio.h>
#include<string.h>

long mystrlen(char *str) {
	
	int count = 0;
	while(*str!='\0') {

		count++;
		str++;
	}
	return count;
}
void main() {

	char *str1 = "Core2WebTech";
	char str2[10] = "Biencaps";

	printf("Library Fuction\n");
	printf("%ld\n",strlen(str1));
	printf("%ld\n",strlen(str2));
	
	printf("\nCustomised Fuction\n");
	printf("%ld\n",mystrlen(str1));
	printf("%ld\n",mystrlen(str2));
}
