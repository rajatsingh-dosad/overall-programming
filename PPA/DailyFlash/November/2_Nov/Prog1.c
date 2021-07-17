
#include<stdio.h>

char *myreverse(char *str1,char *str2) {
	
	int count = 0;
	while(*str1 != '\0') {

		count++;
		str1++;
	}
	
	str1--;

	int i = count-1;
	while(i>=0) {
		
		*str2 = *str1;
		str2++;
		str1--;
		i--;
	}
	*str2 = '\0';
	
	return str2;
}
void main() {

	char str1[50], str2[50];

	printf("Enter the string: ");
	fgets(str1, sizeof str1,stdin);
	
	myreverse(str1,str2);

	printf("Reverse String is: %s\n",str2);
}	
