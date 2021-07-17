

#include<stdio.h>

void main() {

	int count=1;
	int i=1;
	while(i<=4) {

		int j=1;
		while(j<=i) {

			printf("%d ",count);
			count++;
			j++;
		}
		printf("\n");

		int k=3;
		while(k>i) 
		{
			printf(" ");
			k--;
		}
		i++;
	}
}
