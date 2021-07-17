
#include<stdio.h>

typedef struct Library {
	
	char bname[20];
	int bookPages;
	char author[20];
	float price;
}lib;

void main() {

	lib obj1 = {"C",350,"Karnetkar",375.50};
	lib obj2 = {"Java Black Book",500,"Steven Holzner"};
	lib obj3 = {"Cpp",479,"BalguruSwami",250.50};
	lib obj4 = {"Think Python",785,"Allen B. Downey",600};

	lib arr[4] = {obj1,obj2,obj3,obj4};

	for(int i=0;i<4;i++) {

		printf("Book Name = %s\n",arr[i].bname);
		printf("No. of pages = %d\n",arr[i].bookPages);
		printf("Book Author = %s\n",arr[i].author);
		printf("Book Price = %f\n",arr[i].price);
		printf("\n");
	}
}
