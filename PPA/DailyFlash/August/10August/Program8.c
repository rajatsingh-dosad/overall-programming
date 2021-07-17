
/*	Program 8. Write a Program To Print Following Pattern. {Note: Take rows input from
	user}.

Input: Enter Number of Rows: 5
Output:
       A B C D E F G H I
         = = = = = = =
           E F G H I
             = = =
               I
*/


#include<stdio.h>

void main() {

	int row;
	printf("Enter Number of Rows: ");
	scanf("%d",&row);
	int store=row;
	int num=0;
	for(int i=1;i<=row;i++) {
		char ch='A';
		char ch1=ch+(row-1)*num;
		for(int j=1;j<i;j++) {

			printf("  ");
			
		}

		for(int k=store*2-1; k>=1;k--) {

			if(i==1 || i==3 || i==5) {
				printf("%c ",ch1);
				ch1++;
			}
			else {
				printf("= ");
			}

			
		}
		if(i==1 || i==3 ||i ==5)
			num++;
		store--;
		printf("\n");
	}
}


