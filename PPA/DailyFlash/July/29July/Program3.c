

#include<stdio.h>

void main() {

	for(int i=1; i<=5; i++) {

		for(int j=1; j<i; j++) {

			printf("   ");
		}
		int fac=1;
		int num=1;
		for(int k=5; k>=i; k--) {

			fac=fac*num;
			printf("%d  ",fac);
			num++;
		}
		printf("\n");
	}
}
	


			
