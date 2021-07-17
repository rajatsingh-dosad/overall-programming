
#include<stdio.h>

void main() {

	char ch = 'A';
	int val =20;
	float x = 20.5;
	double d = 38.50;

	char *cptr  = &ch;
	int *iptr  = &val;
	float *fptr  = &x;
	double *dptr  = &d;

	printf("%c\n",ch);	//A
	printf("%p\n",cptr);	//Some Address
	printf("%c\n",*cptr);	//A

	printf("%d\n",val);
	printf("%p\n",iptr);
	printf("%d\n",*iptr);
	
	printf("%f\n",x);
	printf("%p\n",fptr);
	printf("%f\n",*fptr);
	
	printf("%lf\n",d);
	printf("%p\n",dptr);
	printf("%lf\n",*dptr);
}
