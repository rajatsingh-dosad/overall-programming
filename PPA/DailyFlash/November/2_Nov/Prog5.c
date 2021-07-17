
#include<stdio.h>

void mysplit(char str[]) {
	
	for(int i=0;str[i] !=  '\0';i++) {

		if(str[i] == ' ')
			printf("\n");
		else {
			printf("%c",str[i]);

		}

		
	}
}


void main() {

	char str[50];

	printf("Enter the string: ");
	fgets(str,sizeof str,stdin);
	
	printf("OUTPUT:\n");
	mysplit(str);
}
