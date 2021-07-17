
#include<stdio.h>

int mycount(char *str) {

	int count = 0;
	while(*str != '\0') {

		count++;
		str++;
	}
	return count;
}
int myCom(char* str1, char *str2) {
	
	int count1=mycount(str1);
	int count2=mycount(str2);

	int flag = 0;
	if(count1 == count2) {

		for(int i=0;i<count1-1;i++) {
			
			if(*str1 == *str2)
				continue;
			else {
				flag = 1;
				break;
			}
		}

	}
	else {
		flag = 1;
	}


	if(flag == 0)
		return 0;
	else 
		return 1;
}
void main() {

	char str1[20];
	char str2[20];

	printf("Enter the string1: ");
	fgets(str1,20,stdin);
	
	printf("Enter the string2: ");
	fgets(str2,20,stdin);


	int ret = myCom(str1,str2);

	if(ret==0)
		printf("Both strings are equal\n");
	else 
		printf("Both strings are not equal\n");
}
