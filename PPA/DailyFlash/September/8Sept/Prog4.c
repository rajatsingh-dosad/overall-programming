

#include<stdio.h>

void main() {
	for(int i=1;i<=4;i++) {

		int n =8-i;
		for(int j=1;j<=i;j++) {

			printf("%d ",n);
			n--;
		}
		printf("\n");
	}
}


