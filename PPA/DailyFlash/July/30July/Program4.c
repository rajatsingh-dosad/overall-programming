

#include<stdio.h>

void main() {

	for(int i=1; i<=4; i++) {
		int num=1;
		for(int j=3;j>=i;j--) {

			printf("  ");
			num++;
		}
		for(int k=1;k<=i*2-1;k++) {

			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
