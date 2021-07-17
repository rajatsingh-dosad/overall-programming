
#include<stdio.h>

void main() {

	//e.g 27: [2 + 7 =9] and [27%9==0] 
	
	int n = 27;
	int tmp = n;

	int sum=0;
	while(n!=0) {
		
		sum = sum + (n %10);
		n=n/10;
	}

	if(tmp%sum==0) 
		printf("%d is Harshad number\n",tmp);
	else
		printf("%d is not a Harshad number\n",tmp);
		

}
	
	
