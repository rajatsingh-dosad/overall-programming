#include<stdio.h>

void main() {
	char ch='A';
	for(int i = 1; i<=5;i++) {

		for(int k =4; k>=i; k--) {

			printf("  ");
		}
		for(int j=1; j<=i; j++) {

			printf("%c ",ch);
			ch++;
		}
	


		ch=ch-i-1;
		printf("\n");

	}

}
