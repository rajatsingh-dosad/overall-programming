

#include<stdio.h>

void main() {
	int num=823456;
	int cn=num;
	int div=1;
	while(num>10) {

		div=div*10;
		num=num/10;
	}
	printf("Number is %d%d\n",cn/div,cn%10);
}


		
