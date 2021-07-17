
#include<stdio.h>
#include<string.h>

char* myLowerCase(char *lower) {
	
	while(*lower!='\0') {	
		if(*lower >='A' && *lower<='Z')
			*lower = *lower + 32;

		printf("%c",*lower);
		lower++;

	}
	
}

char* myUpperCase(char *upper) {
	
	while(*upper!='\0') {	
		if(*upper >='a' && *upper<='z')
			*upper = *upper - 32;

		printf("%c",*upper);
		upper++;
	}
		
}
void main() {

	char str[25];

	printf("Enter a string: ");
	fgets(str,25,stdin);

	printf("String in uppercase is: ");
	myUpperCase(str);
	
	printf("\nString in Lowercase is: ");
	myLowerCase(str);

	printf("\n");
}
