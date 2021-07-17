

#include<stdio.h>

void main(void) {
	
	int count=1;
	int i = 1;
	while(i<=5) {
		int j=5;
		char ch='A';
		while(j>=i) {

			if(j==2 || j==4)
				printf("%d  ",count);
			else
				printf("%c  ",ch);
			ch++;
			count++;
			j--;
		}
		printf("\n");
		i++;
	}
}

