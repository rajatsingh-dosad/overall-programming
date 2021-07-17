
#include<stdio.h>

void main() {

	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);

	int addd = a + b;
	int subb = a - b;
	int mull = a * b;
	int divv = a / b;

	int *adddptr = &addd;
	int *subbptr = &subb;
	int *mullptr = &mull;
	int *divvptr = &divv;

	int *arrptr[] = {adddptr,subbptr,mullptr,divvptr};

	printf("OUTPUT:\n");
	for(int i=0;i<4;i++) {
		printf("%d ",*(arrptr[i]));
	}
	printf("\n");
}
