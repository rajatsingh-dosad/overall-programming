

#include<stdio.h>

void main(void) {
	
	
	int i = 1;
	while(i<=5) {
		int j=5;
		while(j>=i) {

			if(i==1 || j==5)
				printf("*  ");
			else
				printf("=  ");

			j--;
		}
		printf("\n");
		i++;
	}
}

