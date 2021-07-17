
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

	printf("%ld\n",sizeof(ch));	//1
	printf("%ld\n",sizeof(val));	//4
	printf("%ld\n",sizeof(x));	//4
	printf("%ld\n",sizeof(d));	//8
	
	printf("%ld\n",sizeof(cptr));	//8
	printf("%ld\n",sizeof(iptr));	//8
	printf("%ld\n",sizeof(fptr));	//8
	printf("%ld\n",sizeof(dptr));	//8
}
