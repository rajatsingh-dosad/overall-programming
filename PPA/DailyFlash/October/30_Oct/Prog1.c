
#include<stdio.h>
#include<string.h>

int vowelOccurence(char str[],char v,char V) {
	
	int count = 0;
	for(int i=0;i<strlen(str);i++) {

		if(str[i]==v || str[i]==V) 
			count++;
		
	}
	return count;
}

void main() {

	char str[22];
	char arr[] = {'a','e','i','o','u'};

	printf("Enter the string: ");
	
	fgets(str,22,stdin);
	
	int count = 0;
	
	for(int i=0;i<5;i++) {
		count = vowelOccurence(str,arr[i],arr[i]-32);
		printf("%c or %c occured %d times\n",arr[i],arr[i]-32,count);
	}

}
