

#include<stdio.h>

void main() {

/*	int count=65;
	for(int i =1;i<=5;i++) {
		for(int j=5;j>=i;j--) {

			printf("%c ",count);
			count++;
		}
		printf("\n");

	}
*/

	int i=1;				//outer init
	char count='A';	
	while(i<=5) {				//outer condition
		int j=5;			//inner init
		while(j>=i) {			//inner condition

			printf("%c ",count);	// statement
			count++;		//statement
			j--;			//inner dec
		}
		i++;				//outer inc
		printf("\n");
	}
}
