

#include<stdio.h>

void main() {

	for(int i=1; i<=4; i++) {

		for(int j=1; j<=4;j++) {

			if(i==1 || i==3)
				printf("0 ");
			else
				printf("1 ");
		}
		printf("\n");
	}
}
