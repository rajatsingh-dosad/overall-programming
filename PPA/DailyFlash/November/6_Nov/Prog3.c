
#include<stdio.h>

struct Company {
	
	char cName[20];
}c = {"Biencaps"};

struct Founder {

	char fName[20];
	int yearFounded;
	char productName[20];
}f = {"Shashi sir",2019,"Bielearn"};

void main() {
	
	printf("OUTPUT:\n");
	printf("Name of Company = %s\n",c.cName);
	printf("Name of Founder = %s\n",f.fName);
	printf("Year founder = %d\n",f.yearFounded);
	printf("Product Name = %s\n",f.productName);
}
