

#include<stdio.h>

void main() {
	
	int num=30;
	for(int i=10; i<=30; i++) {
		
		if(num%3==0 && num%5==0) {

			printf("%d\n",num);
		}
		num--;
	}
	
}

