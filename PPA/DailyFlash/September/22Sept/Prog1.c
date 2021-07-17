
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
	printf("Content of variable:\n");	//Contents of variable will have all the value inside the variables
	printf("%d\n",i);
	printf("%f\n",f);
	printf("%c\n",c);
	printf("%lf\n",d);
	printf("\n");
	
	printf("sizeof of variable:\n");	//sizeof variable  will give the size of each variable
	printf("%ld\n",sizeof(i));		//4
	printf("%ld\n",sizeof(f));		//4
	printf("%ld\n",sizeof(c));		//1
	printf("%ld\n",sizeof(d));		//8
	printf("\n");


	printf("content of pointer:\n");	//Contents of pointer will the address of the variable thats why we print the value by using '%p'
	printf("%p\n",iptr);
	printf("%p\n",fptr);
	printf("%p\n",cptr);
	printf("%p\n",dptr);
	printf("\n");

	printf("sizeof pointer:\n");		//A pointer will always have the size as 8 byte if have 64bit machine and if machine is 32 bit all pointer will have size as 4
	printf("%ld\n",sizeof(iptr));
	printf("%ld\n",sizeof(fptr));
	printf("%ld\n",sizeof(cptr));
	printf("%ld\n",sizeof(dptr));
}


