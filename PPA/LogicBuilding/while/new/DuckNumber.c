
#include<stdio.h>

void main(void) {
	//Duck number have atleast one 0 e.g 12054,200054,3000000000000005
	//n=Number starting with 0 is not duck number e.g 04090
	
	
	int num = 0;	
	int dup =num;
	int rem;
	int flag = 0;
	while(num!=0) {

		rem = num % 10;
		if(rem==0) {
			flag = 1;
			break;	
		}
		
		num = num /10;
	}
	if(flag==1)
		printf("%d is a duck number\n",dup);
	else
		printf("%d is not a duck number\n",dup);
}



