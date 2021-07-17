

#include<stdio.h>

void main() {

	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	int fac=1;
	int dup=num;
	while(num) {

		fac = fac * num;
		num--;
	}
	printf("The factorial of %d is : %d\n",dup,fac);
}


