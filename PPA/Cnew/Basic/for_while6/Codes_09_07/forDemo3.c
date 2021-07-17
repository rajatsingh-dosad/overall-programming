

#include<stdio.h>

void main() {

	for(int i=1;i<=20;i++) {

		if(i%2!=0) {
			printf("Odd=%d\n",i);
		}

		else if(i%2==0) {

			printf("Even=%d\n",i);
		}
	}
}
