
#include<stdio.h>

void add(int,int);
void sub(int,int);
void fnCallingfn(int,int,void (*)(int,int));

void main() {

	int a = 10;
	int b = 20;

	fnCallingfn(a,b,sub);
}

void fnCallingfn(int x,int y, void (*fptr)(int ,int)) {
		
	fptr(x,y);		
}

void add(int x,int y) {

	printf("Add = %d\n",x+y);
}


void sub(int x,int y) {

	printf("Sub = %d\n",x-y);
}
