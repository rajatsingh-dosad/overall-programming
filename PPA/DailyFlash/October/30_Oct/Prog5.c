
#include<stdio.h>
#include<stdbool.h>

int mystrlen(char *str) {
	
	int count = 0;
	while(*str != '\0') {

		count++;
		str++;
	}
	return count;
}

bool strPalindrome(char str1[],char str2[]) {
	
	int flag = 0;
	if(mystrlen(str1) == mystrlen(str2)) {

		for(int i=0;i<mystrlen(str1);i++) {

			if(str1[i] == str2[i])
				continue;
			else {
				flag = 1;
				break;
			}
		}
	}

	else 
		flag = 1;

	if(flag==0)
		return true;
	else 
		return false;
}
void main() {
	
	char *str1 = "Rajat";
	char *str2 = "Rajat";

	if(strPalindrome(str1,str2))
		printf("Strings are palindrome\n");
	else
		printf("Strings are not palindrome\n");
}
