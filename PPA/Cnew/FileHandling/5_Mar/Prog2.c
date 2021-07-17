
#include <stdio.h>
#include <stdlib.h>

void main() {

	char ch1;
	FILE *fp1,*fp2;
	
	fp1 = fopen("info2.txt","r");
	fp2 = fopen("copy2.txt","w");

	if(fp1==NULL || fp2==NULL )
		exit(1);

	while(1) {

		ch1 = fgetc(fp1);
		if(ch1==EOF) 
			break;
		else 
			fputc(ch1,fp2);
		
	}
	fclose(fp1);
	fclose(fp2);

}
