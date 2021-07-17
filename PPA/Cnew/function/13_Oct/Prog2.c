
#include<stdio.h>

void fac(int);

void main() {

	int val;

	printf("Enter the number for factorial: ");
	scanf("%d",&val);

	fac(val);

}

void fac(int num) {
	
	int fac = 1;
	while(num>0) {
		fac = fac * num;
		num--;
	}
	printf("factorial is %d\n",fac);
	
}


