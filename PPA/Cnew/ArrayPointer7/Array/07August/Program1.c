

#include<stdio.h>

void main() {

	int jerNo[] = {18,7,45,12,10};
	float avg[] = {49.90,54.30,45.50,47.54};
	
	int runs[5];

	int x=10;
	printf("%ld\n",sizeof(x));	//4
	printf("%ld\n",sizeof(jerNo));	//20
	printf("%ld\n",sizeof(avg));	//16
	printf("%ld\n",sizeof(runs));	//20
}
