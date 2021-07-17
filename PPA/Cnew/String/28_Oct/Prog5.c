
#include<stdio.h>
#include<string.h>

void main() {

	char *str1 = "Shashi";
	char *str2 = "ShashI";

	int ret;

	ret = strcmp(str1,str2);
	
	printf("%d\n",ret);
}
