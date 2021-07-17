
#include <stdio.h>
#include <stdlib.h>

void main() {

	FILE *fp;
	char ch;
	int noc=0,nos=0,not=0,nol= 0;
	fp = fopen("myfile2.txt","r");
	
	if(fp==NULL) {
		printf("Not present");
		exit(1);
	}
	
	while(1) {

		ch = fgetc(fp);
		
		if(ch==EOF)
			break;
		noc++;

		if(ch==' ')
			nos++;
		else if(ch=='\t')
			not++;
		else if(ch=='\n')
			nol++;
	}

	printf("%d %d %d %d\n",noc,nos,not,nol);
	

}
