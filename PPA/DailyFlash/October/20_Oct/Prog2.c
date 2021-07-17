
#include<stdio.h>

int factorial(int n) {
	int fac = 1;
	while(n>0) {

		fac = fac * n;
		n--;
	}
	return fac;
}
void main() {

	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	int fac;
	fac = factorial(num);

	printf("Factorial of %d is %d\n",num,fac);
}

