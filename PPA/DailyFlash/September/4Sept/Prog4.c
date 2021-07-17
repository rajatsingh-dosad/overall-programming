

#include<stdio.h>

void main() {

	for(int i=0;i<4;i++) {
		int num = 3-i;
		for(int j=0;j<=i;j++) {

			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}


