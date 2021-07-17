
#include<stdio.h>

void main() {

	char strptr[] = "Bilearn";

	printf("%c\n",*strptr);		//B

	*strptr = *(strptr+1); 
	
	printf("%c\n",*strptr);		//i

}
