
#include<stdio.h>

int sum(int *ptr, int size)  {
	
	int sum = 0;
	
	for(int i=0;i<size;i++) {

		sum = sum + *(ptr+i);
	}
	return sum;
}
