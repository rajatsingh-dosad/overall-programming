

#include<stdio.h>

void main() {

	for(int i=1; i <=4; i++) {

		for(int j= 3;j>=i; j--) {

			printf("  ");
		}
		
		int count=1;
		for(int k=1; k<=i; k++) {

			printf("%d ",count);
		       count++;
		}

		printf("\n");
	}
}




