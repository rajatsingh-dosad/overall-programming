

#include<stdio.h>

void main() {
	int a =0;
	int b=1;

	for(int i=1;i <=5;i++) {

		for(int j=1; j<i; j++) {

			printf("    ");
		}
		for(int k=5; k>=i; k--) {
			int c=a+b;	
			if(i==1 && k==5)
				printf("%d   ",a);
			else if(i==1 && k==4)
				printf("%d   ",b);
			else {
				printf("%d   ",c);
				a=b;
				b=c;
			}
		
		}
		printf("\n");
	}
}

