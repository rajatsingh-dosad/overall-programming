
#include<stdio.h>

struct Complex1 {
	
	int real,img;
}a,b;

struct ComplexAns {

	int real,img;
}realAns,imgAns;

void main() {
	
	printf("Enter the real and imaginary part of first complex number: ");
	scanf("%d %d",&a.real,&a.img);

	printf("Enter the real and imaginary part of second complex number: ");
	scanf("%d %d",&b.real,&b.img);

	realAns.real = a.real + b.real;
	imgAns.img = a.img + b.img;

	printf("Complex number is %d+i%d\n",realAns.real,imgAns.img);
}


