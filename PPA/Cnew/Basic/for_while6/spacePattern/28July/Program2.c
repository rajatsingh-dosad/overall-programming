/*   
 	A  B  C  D
	   A  B  C
	      A  B
		 A

*/


#include<stdio.h>

void main() {

	for(int i=1; i<=4; i++) {
		
		
		char ch='A';
		for(int j=1; j<i; j++) {

			printf("  ");
		
		}
		for(int k=4; k>=i; k--) {

			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
