
#include <stdio.h>

void main() {
	
	FILE *fp = fopen("info2.txt","a");
	char ch[30] = ";;;;;;;;;;;;;;;;;;;;;;;;;;;;";
	
	int i=0;

	fputs(ch,fp);

}	
