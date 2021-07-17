

#include<stdio.h>

void main() {
	
	for(int i=1; i<=5; i++) {
		for(int j= 4; j>=i; j--) {

			printf("  ");
		}

		int num=0;
		for(int k=1; k<=i;k++) {

			if(num==0) {
				printf("%d ",num);
				num++;
			}
			else {
				printf("%d ",num);
				num--;
			}

		}
		printf("\n");
	}
}
			
