-++
#include<stdio.h>

void main() {

	//Abundant  number : 
	//e.g 12 : Divisors(1,2,3,4,6) so when we add 1+2+3+4+6 => 16 > 12
	
	//Deficient  number : 
	//e.g 22 : Divisors(1,2,11) so when we add 1+2+11 => 14 < 22
	

	int n = 22;
	int sum = 0;

	for(int i=1 ;i<n;i++) {

		if(n%i==0) {
			sum = sum + i;
		}
	}

	if(sum<n) 
		printf("%d is defficient number\n",n);
	else if(sum>n)
		printf("%d is abundant number\n",n);
}
