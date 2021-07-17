
#include<stdio.h>
#pragma pack(1)

struct Book {

	char bname[20];
	int nPages;
	char x;
	double price;
};

void main() {

	printf("%ld\n",sizeof(struct Book));
}
