
#include<stdio.h>

void main() {

	int iarray[5]= {10,20,30,40,50};
	printf("%ld\n",sizeof(iarray));

	char carray[3+2] = {'A', 'B', 'C'};
	printf("%ld\n",sizeof(carray));
	for(int i=0; i<5; i++) {

		printf("%c\n",carray[i]);
	}
/*	ERRORR
 *
	int size =5;
	float farray[size] = {10.5,20.5,30.5,40.5};
	printf("%ld\n",sizeof(farray));

	for(int i=0; i<5; i++) {

		printf("%f\n",farray[i]);
	}
*/

	
	float farray[] = {10.5,20.5,30.5,40.5};
	printf("%ld\n",sizeof(farray));

	for(int i=0; i<5; i++) {

		printf("%f\n",farray[i]);
	}

}
