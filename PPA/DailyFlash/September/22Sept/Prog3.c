
#include<stdio.h>

void main() {

	int i= 10;
	float f= 20.5;
	char c = 'A';
	double d = 3200.4;

	int *iptr = &i;
	float *fptr = &f;
	char *cptr = &c;
	double *dptr = &d;

	printf("\n");
	printf("Address of variable:\n");
	printf("%p\n",&i);
	printf("%p\n",&f);
	printf("%p\n",&c);
	printf("%p\n",&d);
	printf("\n");
	

	printf("Address of pointer:\n");
	printf("%p\n",&iptr);
	printf("%p\n",&fptr);
	printf("%p\n",&cptr);
	printf("%p\n",&dptr);
	printf("\n");

	printf("Value of variable using dereferencing:\n");
	printf("%d\n",*iptr);
	printf("%f\n",*fptr);
	printf("%c\n",*cptr);
	printf("%lf\n",*dptr);
	printf("\n");
}

