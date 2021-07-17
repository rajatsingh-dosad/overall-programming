 

#include<stdio.h>
#include<string.h>

void main()  {

	char ch[] = "rajat";
	int len = 0;
	while(ch[len]!='\0') {
		len++;
	}
	printf("Len is %d\n",len);
	int temp;
	for(int i = 0; i< (len-1)/2; i++ ) {

		temp = ch[i];
		ch[i] = ch[len-1-i];
		ch[len-1-i] = temp;
	}
	printf("Reverse string is %s\n",ch);


}


