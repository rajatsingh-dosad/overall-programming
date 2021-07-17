

#include<stdio.h>

void main() {
		int num=7;
	for(int i=0 ;i<4;i++) {

		for(int j=0;j<=i;j++) {

			printf("%d ",num);
			num--;
		}
		printf("\n");
		num++;
	}
}

