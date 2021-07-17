
#include<stdio.h>

char* mystrReverse(char str[]) {
	
	char *rev = str;
	int count = 0;
	
	while(*rev!='\0') {

		count++;
		rev++;
	}
	for(int i=0;i<count/2;i++) {
		
		char temp = str[i];
		str[i] = str[count-i-1];
		str[count-i-1] = temp;

	}

	return str;

}

void main() {

	char str[20];

	printf("Enter the string: ");
	scanf("%[^\n]",str);
	
	puts("String after reversing:");
	puts(mystrReverse(str));
}




