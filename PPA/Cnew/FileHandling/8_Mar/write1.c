
#include <stdio.h>
void main() {

	FILE *fp2 = fopen("one.txt","r");
	FILE *fp = fopen("one.txt","w");
	char c;

	char ch[] = "Shubham is a good boy";
	
	int i =0;

		

	while(ch[i]!='\0') {

		fputc(ch[i],fp);
		i++;
	}

}
