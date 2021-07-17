

#include<stdio.h>

void main() {

	int num = 1;
	for(int i=1;i<=4; i++) {

		for(int j=1; j<=i; j++) {

			printf("%2d ",num*num);
			num++;
		}
		printf("\n");
	}
}
