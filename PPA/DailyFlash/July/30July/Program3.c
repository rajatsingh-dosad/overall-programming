
#include<stdio.h>

void main() {

	for(int i=1; i<=4;i++) {
		int num=4;
		for(int j=3;j>=i; j--) {

			printf("\t");
			num--;
		}

		for(int k=1; k<=i*2-1; k++) {

			if(k>=i) {
				printf("%d\t",num*num);
				num++;
			}
			else {
				printf("%d\t",num*num*num);
				num--;
			}
		}
		printf("\n");
	}
}

