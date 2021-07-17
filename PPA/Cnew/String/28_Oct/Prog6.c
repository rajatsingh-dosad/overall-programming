
#include<stdio.h>

void main() {

	char* str1[4] = {"Shashi","Ashish","Rahul","kanha"};

	char str2[4][10] = {"Java","c","Python","Cpp"};

	for(int i=0;i<4;i++) {

		printf("%s\n",*(str1+i));
		printf("%s\n",*(str2+i));
	}
}
