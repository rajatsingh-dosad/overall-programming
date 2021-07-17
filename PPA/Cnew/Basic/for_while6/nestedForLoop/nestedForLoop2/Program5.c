

#include<stdio.h>

void main() {

	for(int i =1; i<=4; i++) {
		
		int x=1;
		for(int j =4; j>=i; j--) {

			printf("%d ",x);
			x++;
		}
		printf("\n");
	}
}
