

#include<stdio.h>

void main(void) {
	
	int count=1;
	int i = 1;
	while(i<=5) {
		int j=5;
		while(j>=i) {

			if(j==2 || j==4)
				printf("%d  ",count);
			else
				printf("A  ");
			count++;
			j--;
		}
		printf("\n");
		i++;
	}
}

