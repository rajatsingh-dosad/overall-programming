

#include<stdio.h>

void main() {

	for(int i=1; i<=4; i++) {
		int x =1;
		for(int j=3; j>=i; j--) {

			printf("  ");
		}
		for(int k=1;k<=i*2-1; k++) {
			
			printf("%d ",x);
			if(k>=i)
				x--;
			else
				x++;
		}
		printf("\n");
	}
}
