

#include<stdio.h>

void main() {

	for(int i=1;i<=65;i++) {	//We have a loop from 1 to 65 and goes forward one by one

		if(65%i==0) {		//This condition checks if 65 is divisible by "i"

			printf("%d ",i);	//printing "i"

		}
		
	}
	printf("\n");
}
