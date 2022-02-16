

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Player {

	char pName[20];
	int jerNo;
	char cName[20];
	float sal;
};

void passCric(struct Player* cric) {

	printf("%s\n",cric->pName);
	printf("%d\n",cric->jerNo);
	printf("%s\n",cric->cName);
	printf("%f\n",cric->sal);
}


void passFb(struct Player* fb) {
		
	printf("%s\n",fb->pName);
	printf("%d\n",fb->jerNo);
	printf("%s\n",fb->cName);
	printf("%f\n",fb->sal);

}

void main() {

	struct Player* cric = (struct Player*)malloc(sizeof(struct Player));
	struct Player* fb = (struct Player*)malloc(sizeof(struct Player));

	strcpy(cric->pName,"Virat");
	cric->jerNo = 18;
	strcpy(cric->cName,"India");
	cric->sal = 250.00;
	
	
	strcpy(fb->pName,"Messi");
	fb->jerNo = 10;
	strcpy(fb->cName,"Argentina");
	fb->sal = 250.00;

	passCric(cric);
	printf("*******************\n");
	passFb(fb);
}
