
#include<stdio.h>
#include<stdlib.h>

void main() {

	FILE *fp = fopen("one.txt","w");
	char another ='y';
	struct emp {

		char name[30];
		int age;
		float bs;
	}e;

	if(fp==NULL) {
		puts("Cannot open file");
		exit(1);
	}

	while(another == 'y') {

		printf("Enter the name, age and basic salary: ");
		scanf("%s%d%f",e.name,&e.age,&e.bs);

		fprintf(fp,"%s %d %.2f\n",e.name,e.age,e.bs);

		printf("Do you want to add more: ");
		
		fflush(stdin);
		scanf(" %c",&another);

		
	}

}

	 
