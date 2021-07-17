

#include<stdio.h>

void main() {

	printf("All odd numbers between 20 to 40 are:\n");
	
	for(int i=20;i<=40;i++) {	//Starting number is 20 till 40

		if(i%2!=0) {		//Checking odd numbers

			printf("%d\n",i);	//printing odd numbers
		}
	}
}
