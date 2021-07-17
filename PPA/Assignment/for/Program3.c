

#include<stdio.h>

void main() {

	printf("All even numbers between 50 to 70 are:\n");
	
	for(int i=50;i<=70;i++) {	//Starting number is 50 till 70

		if(i%2==0) {		//Checking even numbers

			printf("%d\n",i);	//printing even numbers
		}
	}
}
