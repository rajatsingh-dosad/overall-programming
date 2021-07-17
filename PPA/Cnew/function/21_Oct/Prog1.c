
#include<stdio.h>

void add(int,int);
void sub(int,int);

void main() {
	
	void (*fptr)(int,int);

	fptr = add;

	(*fptr)(10,20);

	fptr= sub;

	fptr(20,10);

}

void add(int x,int y) {

	printf("Add = %d\n",x+y);
}

void sub(int x,int y) {

	printf("Sub = %d\n",x-y);
}
