

#include<stdio.h>

void main() {

	int num;

	printf("Enter a number: ");
	scanf("%d",&num);
	
	int fac=1;
	while(num>=1) {

		fac=fac*num;
		num--;
	}
	printf("%d\n",fac);
}


