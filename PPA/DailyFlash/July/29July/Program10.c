

#include<stdio.h>

void main() {
	int num=1;
	for(int i=1; i<=5; i++) {
		
		for(int j=1; j<i; j++) {

			printf("\t");
		}

		for(int k=5; k>=i; k--) {

			if(i==1 || i==3 || i==5)
				printf("%d\t",num * num);
			else
				printf("%d\t",num*num*num);
			num++;
		}
		printf("\n");
	}
}
