
#include<stdio.h>

int mystrlen(char *str) {
	
	int count = 0;
	while(*str != '\0') {

		count++;
		str++;
	}
	return count;
}

	
char* myreverse(char* str) {
	
	int count = mystrlen(str);
	
	for(int i=count-1;i>=0;i--) {

		printf("%c",*str);
		str++;

	}
	printf("\n");
	
}
void main() {

	char str[20];

	printf("Enter the string: ");
	fgets(str,20,stdin);

	int size = mystrlen(str);
	
	char sarr1[sizeof str/2];
	char sarr2[sizeof str/2];
	
	int i=0;
	for(;i<(mystrlen(str)-1)/2;i++) {

		sarr1[i] = str[i];
		
	}
	sarr1[i] = '\0';
	
	printf("OUTPUT:\n");
	myreverse(sarr1);
	
	
	int j=0;
	for(;str[i] != '\0';j++) {

		sarr2[j] = str[i];
		i++;
		
	}

	sarr2[j] = '\0';

	myreverse(sarr2);
	
	
}



