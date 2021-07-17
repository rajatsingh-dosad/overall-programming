
#include <stdio.h>
#include <stdlib.h>

void main() {

	FILE *fp = NULL;

	struct emp {

		char name[40];
		int age;
		float bs;
	}e;

	fp = fopen("one.txt","rb");
	if(fp==NULL) {

		puts("Cannot open file");
		exit(1);
	}


	while(fread(&e,sizeof(e),1,fp) == 1) {
		
		printf("%s %d %f\n",e.name,e.age,e.bs);
	}

	fclose(fp);
}
