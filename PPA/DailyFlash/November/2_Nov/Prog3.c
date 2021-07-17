
#include<stdio.h>
#include<stdbool.h>

int mycount(char* str) {
	
	int count = 0;
	while(*str != '\0') {

		count++;
		str++;
	}
	return count;
}


bool mysubstring(char* str, char* sub) {
	
	for(int i=0;i<=((mycount(str)-1) - (mycount(sub)-1));i++) {
		
		int k=i;
		int j=0;
		for(;j<mycount(sub)-1;j++) {

			if(str[k]!=sub[j])
				break;
			k++;
		}
		if(j==mycount(sub)-1)
			return true;

	}

	return false;


}
void main() {


	char str[20];
	char sub[20];
	
	printf("Enter the string: ");
	fgets(str,sizeof str,stdin);
	
	printf("Enter the substring: ");
	fgets(sub,sizeof sub,stdin);

	printf("OUTPUT:\n");

	if(mysubstring(str,sub))
		printf("Substring is present in string\n");
	else 
		printf("Substring is not present in string\n");
}
