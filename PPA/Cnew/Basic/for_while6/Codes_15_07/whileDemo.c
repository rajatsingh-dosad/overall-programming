

#include<stdio.h>

void main() {
	int sum=0;
	int i=1;			//initialization
	
	while(i<=100) {			//condition

		if(i%5==0) {		//statement

			sum+=i;		//statement
		}
		i++;			//inc/dec
	}
	printf("Sum=%d\n",sum);
}
