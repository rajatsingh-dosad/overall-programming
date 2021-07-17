
#include<stdio.h>

void main() {

	struct player {
		
		char team;	
		char x;
		int jerseryNo;
		float avg;
		char grade;
	};
	
	struct player p;
	printf("%ld\n",sizeof(struct player));
	printf("%ld\n",sizeof(p));
}
