

#include<stdio.h>

void main() {

	for(int i=1; i<=5;i++) {

		int num=1;
		for(int j=1; j<i; j++) {

			printf("      ");
			num++;
		}
		for(int k=5; k>=i; k--) {

			printf("  %d   ",i*num);
			num++;
		}
		printf("\n");
	}
}
