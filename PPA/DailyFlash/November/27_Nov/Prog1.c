
#include<stdio.h>


void getId() {
	
	int i = 1;
	static int id = 100;
		
	printf("Id of student %d is : %d\n",i,id);
	id++;
}

void main() {
	
	getId();
	getId();
	getId();
	getId();
}
		
