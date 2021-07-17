

#include<stdio.h>

void main() {
	
	
	for(int i=1;i<=4;i++) {
		char ch='a';
		for(int k=1;k<=i;k++) {
			printf("%c ",ch);
	
			ch++;
		}
		printf("\n");
		for(int j=3;j>i;j--) {
			printf("  ");
	
		}		
	
	
	}
}

