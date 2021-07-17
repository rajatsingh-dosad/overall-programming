
#include<stdio.h>

void main() {

	int num = 0;
	int count=0;
	if(num==0) 
		count=1;
	else {
		while(num!=0) {

			num=num/10;
			count++;
	}
	}
	printf("Total no of Digits = %d\n",count);
	
}
