
#include<stdio.h>

void gcd(int ,int);

void call() {

	int a,b;
	printf("Enter the two numbers: ");
	scanf("%d %d",&a,&b);
	
	gcd(a,b);

}

