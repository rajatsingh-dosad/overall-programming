
#include<stdio.h>

void main() {

	//e.g 153: 1^3 + 5^3 + 3^3 = 153  (here we are cubing becoz number of digits in number are 3)
	
	int num = 153;
	int sum = 0;
	int dup = num;
	int tmp = num;
	int rem=0,cnt=0;

	while(num!=0) {
		num = num / 10;
		cnt++;
	}

	while(tmp!=0) {

		rem = tmp % 10;
		int mul = 1;
		int count = cnt;
		while(count > 0) {

			mul = mul * rem;
			count--;
		}
		sum = sum + mul ;
		tmp = tmp / 10;
	}

	if(sum == dup ) {
		printf("%d is a armstrong number\n",dup);
	}
	else
		printf("%d is not a armstrong number\n",dup);
}




	




