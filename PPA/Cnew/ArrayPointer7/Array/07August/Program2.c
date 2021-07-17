

#include<stdio.h>

void main() {

	int jerNo[5] = {18,7,45,12,10};
	float avg[] = {49.90,54.30,45.50,47.54};
	
	int runs[5] ;
	float car[5] ;
	
	printf("%d\n",jerNo[1]);		//12
	printf("%f\n",avg[2]);		//45.50000
	printf("%d\n",runs[2]);		//garbage value
	printf("%f\n",car[2]);		//garbage value


	}
