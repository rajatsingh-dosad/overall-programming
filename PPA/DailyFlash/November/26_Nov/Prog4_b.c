
#include<stdio.h>

void gcd(int a,int b) {
	
	int gcd = 1;
	for(int i=1;i<=a && i<=b;i++) {

		if(a%i==0 && b%i==0) 
			gcd = i;
	}

	printf("Gcd of two numbers is %d\n",gcd);
}

