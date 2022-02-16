
// Here passing whole structure to function leads to copy of whole structure in the function which is a bit heavy operation.

#include <stdio.h>
#include <string.h>

struct Player {

	char pName[20];
	int jerNo;
	char cName[20];
	float sal;
}bb = {"Kobe",20,"USA",750};	//Usually we don't create object globally of structure because the object becomes visible to every function till the end.

void passCric(struct Player cric) {

	printf("%s\n",cric.pName);
	printf("%d\n",cric.jerNo);
	printf("%s\n",cric.cName);
	printf("%f\n",cric.sal);
}


void passFb(struct Player fb) {
		
	printf("%s\n",fb.pName);
	printf("%d\n",fb.jerNo);
	printf("%s\n",fb.cName);
	printf("%f\n",fb.sal);

}

void passBB() {

	printf("%s\n",bb.pName);
	printf("%d\n",bb.jerNo);
	printf("%s\n",bb.cName);
	printf("%f\n",bb.sal);

}

void main() {

	struct Player cric = {"Virat Kohli",18,"India",250.00};
	struct Player fb = {"Messi",10,"Argentina",650.00};

	passCric(cric);
	printf("*******************\n");
	passFb(fb);
	printf("*******************\n");
	passBB();
}
