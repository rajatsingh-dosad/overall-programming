
#include<stdio.h>

void main() {
	
	char str1[] = {'C','o','r','e','2','W','e','b'};
	char str2[] = {'S','h','a','s','h','i'};

	printf("%ld\n",sizeof(str1));		//8
	printf("%ld\n",sizeof(str2));		//6
	printf("%ld\n",sizeof("Core2Web"));	//9
	printf("%ld\n",sizeof("Shashi"));	//7
}
