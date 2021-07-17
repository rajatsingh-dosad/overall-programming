

#include<stdio.h>

void main() {
	int n;
	scanf("%d",&n);

	for(int i=1; i<=n; i++) {
		int num= 0;
		for(int j=1; j<=n; j++) {

			if(j>=i) 
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
