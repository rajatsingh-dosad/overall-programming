
#include<stdio.h>

void main() {

	for(int i=1; i<=5; i++) {
		int n=1;
		for(int j=4; j>=i; j--) {

			printf("  ");
		}
		for(int k=1; k<=i*2-1; k++) {

			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
}
