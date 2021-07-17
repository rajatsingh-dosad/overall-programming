
#include<stdio.h>
#include<string.h>

int mystrlen(char *str) {

	int count = 0;
	while(*str++!='\0') {

		count++;
	}
	return count;
}
void main() {


	char str[20];
	printf("Enter the string: ");
	int asciiValue = 0;
	scanf("%[^\n]",str);

	printf("Length of the string is %d\n",mystrlen(str));

	for(int i=0;i<mystrlen(str);i++) {

		asciiValue += (int)str[i];

	}

	printf("Addition of ascii value is %d\n",asciiValue);
}
