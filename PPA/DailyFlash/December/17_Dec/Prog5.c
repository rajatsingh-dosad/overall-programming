
#include <stdio.h>

void main() {
	
	char c = 'E';
	int num = 0;
	for(int i=0;i<9;i++) {
		
		if(i<5) {
			for(int j=4;j>i;j--) {

				printf(" ");
			}
			
			if(i == 0) {
				printf(" %c \n",c);
				c--;
			}
			else {

				for(int k=0;k<2;k++) {

					printf(" %c ",c);
					
				}
				c--;
				printf("\n");
			}
		}

		else if(i >= 5) {

			for(int j=0;j<=num;) {

				printf(" ");
				num++;
			}
			if(i==8) {

				printf(" %c \n",c);
				c++;
			}
			else {

				for(int k=0;k<2;k++) {

					printf("%c ",c);
				}
				c++;
				printf("\n");
			}
		}
	}

}
