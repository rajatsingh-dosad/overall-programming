
#include<stdio.h>
#pragma pack(1)

typedef struct Book {

	char bName[20];
	char author[20];
	int pages;
	float price;
}book;

void main() {

	book c = {"letUsC","Kanetkar",300,350.0};
	book java = {"Black Book","Nageshwar Rao",660,450.0};
}


