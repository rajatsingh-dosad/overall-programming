

#include<stdio.h>

void main()  {

	int n=4;

	for(int i=1 ;i<=n ;i++) {

		for(int j=1;j<=n;j++) {

			if(i+j>n) 
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
