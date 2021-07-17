
#include<stdio.h>
#include<stdlib.h>

void add(int,int);
void sub(int,int);
void mul(int,int);
void dive(int,int);

void main() {
	
	void (*arrptr[4])(int ,int) = {add,sub,mul,dive};

	int ch,a,b;
	printf("Enter Your choice:\n");
	printf(" 0.Add\n 1.Sub\n 2.Mul\n 3.div\n");

	scanf("%d",&ch);
	if(ch < 0 || ch > 3) {

		printf("Wrong choice\n");
		exit(0);


	}
	else {
		printf("Enter values for a and b: \n");
		scanf("%d %d",&a,&b);
		arrptr[ch](a,b);
	}
}


void add(int x,int y) {

	printf("Add = %d\n",x+y);
}

void sub(int x,int y) {

	printf("Sub = %d\n",x-y);
}

void mul(int x,int y) {

	printf("Mul = %d\n",x*y);
}
void dive(int x,int y) {

	printf("Div = %d\n",x/y);
}
