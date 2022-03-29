
//String Palindrome
//e.g MADAM

#include <stdio.h>
#include <stdbool.h>

bool checkPalindrome(char str[],int size) {

	static int i = 0;
	if(i>size/2)
		return true;

	if(str[i]!=str[size-1-i])
		return false;
	
	i++;
	checkPalindrome(str,size);
}	

void main() {
	
	char str[] = "racecar";

	int size = sizeof(str)/sizeof(str[0]);
	
	//Here while calling function we gave size-1 because the way we have written string in that the last character present is '\0' which is end of string
	if(checkPalindrome(str,size-1))
		printf("The string is a palindrome\n");
	else
		printf("The string is not a palindrome\n");

}
