
#include <stdio.h>
#include <stdlib.h>

void main() {

	FILE *fp = NULL;

	char another = 'y';

	struct emp {

		char name[40];
		int age;
		float bs;
	}e;

	fp = fopen("one.txt","wb");
	if(fp==NULL) {

		puts("Cannot open file");
		exit(1);
	}

	while(another == 'y') {

		printf("Enter the name,age and basic salary: ");
		scanf("%s %d %f",e.name,&e.age,&e.bs);

		fwrite(&e,sizeof(e),1,fp);

		printf("Add another record(y/n): ");
		scanf(" %c",&another);
	}
	fclose(fp);
}
