

#include<stdio.h>

void main(void) {
	
	
	int i = 1;
	while(i<=5) {
		int j=1;
		while(j<=i) {

			if(i==2 || i==4)
				printf("=  ");
			else
				printf("*  ");

			j++;
		}
		printf("\n");
		i++;
	}
}

