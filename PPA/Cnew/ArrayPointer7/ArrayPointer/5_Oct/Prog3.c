
#include<stdio.h>

void main() {

	int x = 10;

	int *ptr1 = &x;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;


	printf("%d\n",x);			//10
	printf("%d\n",*ptr1);			//10
	printf("%d\n",**ptr2);			//10
	printf("%d\n",***ptr3);			//10
	printf("%d\n",****ptr4);		//10
	printf("%d\n",*****ptr5);		//10
	printf("%d\n",******ptr6);		//10
	printf("%d\n",*******ptr7);		//10
	printf("%d\n",********ptr8);		//10

}
