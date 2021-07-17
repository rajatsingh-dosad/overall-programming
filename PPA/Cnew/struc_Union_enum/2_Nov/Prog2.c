
#include<stdio.h>

struct Bielearn {

	char type[20];
	int teamSize;

};

void main() {

	struct Bielearn obj1 = {"Product",8};
	struct Bielearn *ptr = &obj1;

	printf("Type = %s and Teamsize = %d\n",obj1.type,obj1.teamSize);
	printf("Type = %s and Teamsize = %d\n",ptr->type,ptr->teamSize);
	printf("Type = %s and Teamsize = %d\n",(*ptr).type,(*ptr).teamSize);

		
}
