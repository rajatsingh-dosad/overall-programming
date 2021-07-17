
#include<stdio.h>

void add(int a,int b) {

	printf("Addition is : %d\n",a+b);
}

void sub(int a,int b) {

	printf("Subtraction is : %d\n",a-b);
}

struct Math {

	void (*fptr1)(int ,int);
	void (*fptr2)(int ,int);
};

void main() {

	struct Math obj;
	obj.fptr1 = add;
	obj.fptr1(10,5);

	obj.fptr2 = sub;
	obj.fptr2(10,5);
}

