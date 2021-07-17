

#include<stdio.h>

void main() {

	for(int i=1; i<=5; i++) {
		int num = 5;;
		for(int j=4; j>=i; j--) {

			printf("  ");
			num--;
		}
		for(int k=1; k<=i; k++) {

			printf("%d ",num);
			num--;
		}
		printf("\n");
	}
}
