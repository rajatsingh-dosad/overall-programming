

#include<stdio.h>

void main() {

	int num= 0;
	for(int i=1;i<=4;i++) {
		for(int j=1; j<4*2;j++) {

			if(i+j>=5 && i+j<=5+num) 
				printf("*");
			else 
				printf(" ");
		}
		printf("\n");
		num=num+2;
	}
}





