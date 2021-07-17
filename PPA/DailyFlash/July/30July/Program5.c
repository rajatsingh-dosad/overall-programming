

#include<stdio.h>

void main() {

	for(int i=1; i<=4; i++) {
		char ch='A';
		for(int j=3;j>=i;j--) {

			printf("  ");
			ch++;
		}
		for(int k=1; k<=i*2-1; k++) {

			if(k>=i) {
				printf("%c ",ch);
				ch--;
			}
			else {
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}


