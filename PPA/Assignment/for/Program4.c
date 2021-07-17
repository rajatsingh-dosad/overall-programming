

#include<stdio.h>

void main() {
	
	printf("All divisors of 50 are\n");
	for(int i=1;i<=50;i++) {		

		if(50%i==0) {		//if this condition satisfies than we get divisor of 50

			printf("%d\n",i);	//printing divisor of 50

		}
	}
}


