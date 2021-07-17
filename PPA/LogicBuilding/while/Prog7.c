

#include<stdio.h>

void main()  {

	int num = 123454321;
	int eCount=0, oCount=0;
	while(num!=0) {

		int rem=num%10;
		if(rem%2==0) 
			eCount ++;
		else 
			oCount++;
		num=num/10;
	}
	printf("Count of even numbers = %d\n",eCount);
	printf("Count of odd numbers = %d\n",oCount);
}

		
