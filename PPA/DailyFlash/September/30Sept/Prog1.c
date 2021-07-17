
#include<stdio.h>

void main() { 
	
	int iarray[] = {10,20,30,40,50};
	int *ptr = iarray;

	for(int i=0;i<5;i++) {

		printf("%d\n",*ptr);
		ptr++;
	}

}

