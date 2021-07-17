
#include<stdio.h>
#include<stdlib.h>

void main() {

	FILE *fp = fopen("one.txt","r");
	struct emp {

		char name[30];
		int age;
		float bs;
	}e;

	if(fp==NULL) {
		puts("Cannot open file");
		exit(1);
	}
	
	while(fscanf(fp,"%s%d%f",e.name,&e.age,&e.bs) != EOF) {


		printf("%s %d %f\n",e.name,e.age,e.bs);
	}
}

	 
