#include<stdio.h>

typedef struct Book {

	char* book_name;
	char* Author_name;
	char* publication;
	int noOfpages;
	float book_price;

}book;

void main() {

	book b1 = {"Let Us C","Yashwant Kanetkar","BPB Publications",798,474};
	book b2 = {"Wings of Fire"," Dr. Abdul Kalam and Arun Tiwari","Universities Press",180,295};
	book b3 = {"Turning Points"," Dr. A.P.J. Abdul Kalam","Harper Collins Publications",174,350};

	book arr[3] = {b1,b2,b3};

	for(int i = 0; i < 3; i++){

		printf("Book Name:- %s\n",arr[i].book_name);
		printf("Author Name:- %s\n",arr[i].Author_name);
		printf("Publication:- %s\n",arr[i].publication);
		printf("No. of pages:- %d\n",arr[i].noOfpages);
		printf("Book price:- %.2f\n",arr[i].book_price);

		printf("\n");
		
	}

}
