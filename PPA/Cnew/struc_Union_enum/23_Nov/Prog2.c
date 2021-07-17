
#include<stdio.h>

enum Days {

	sun = 10,
	mon,
	tue = 30
};

void main() {
	
	enum Days obj1;
	enum Days obj2;

	printf("%d\n",obj1);	
	printf("%d\n",obj2);	
	printf("%d\n",sun);	
	printf("%d\n",mon);	
	printf("%d\n",tue);	
}
