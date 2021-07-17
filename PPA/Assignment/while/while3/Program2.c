

#include<stdio.h>

void main() {
	
	int count=1;
	int outer = 1;
	while(outer<=5) {
		int inner=1;

		while(inner<=outer) {

			printf("%d ",count);
			inner++;
			count++;
		}
		outer++;
		printf("\n");
		count--;
	}
}


