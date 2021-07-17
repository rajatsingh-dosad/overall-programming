

#include<stdio.h>

void main() {

	int num=976132;
	int sum=0,mult=1;

	while(num) { 

		if(num%2==0) {

			mult = mult * (num%10);
		}
		else
			sum = sum + (num%10);

		num = num / 10;
	}
	printf("Sum = %d\n",sum);
	printf("Mul = %d\n",mult);
}



