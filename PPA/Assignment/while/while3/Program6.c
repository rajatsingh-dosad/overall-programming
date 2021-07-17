

#include<stdio.h>

void main() {

	for(int i =1;i<=5;i++) {
		
		int num2=6-i;
		int k=num2;
		for(int j = 5;j>=i;j--) {
		

			printf("%d ",i*k);
			k--;
			
		}

		printf("\n");
		printf(" ");
	}
}

