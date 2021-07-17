
#include<stdio.h>
#include<string.h>

void main() {
	
	char ch[20];
	printf("Enter the name: ");
	scanf("%[^\n]",ch);

	printf("OUTPUT:\n");
	for(int i=0;i<strlen(ch);i++) {

		if(ch[i]==' ')
			ch[i] = '-';
	}

	puts(ch);
}
