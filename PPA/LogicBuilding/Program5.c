
#include<stdio.h>

void main() {
	int num;
	int fac=1;
	printf("Enter a number: ");
	scanf("%d",&num);

	for(int i=num; i>0; i--) {

		fac=fac*i;
	}
	printf("%d\n",fac);
}
