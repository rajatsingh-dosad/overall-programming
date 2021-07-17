

#include<stdio.h>

void main() {

	for(int i=1;i<=4;i++) {

		for(int j=4;j>=i;j--) {
			
			if(j==4 || j==2)
				printf("+ ");
			else
				printf("= ");
		}
		printf("\n");
	}
}



