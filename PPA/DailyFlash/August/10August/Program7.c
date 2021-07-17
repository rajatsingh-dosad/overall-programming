
/*	Program 7. Write a Program To Print Following Pattern. {Note: Take rows input from
	user}.

Input: Enter Number of Rows: 5
Output:
	0
      3 2 5
    4 6 4 10 4
  3 6 9 6 15 6 21
8 4 8 12 8 20 8 28 8

*/


#include<stdio.h>

void main() {

	int row;
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	int num=1;

	for(int i=0;i<row;i++) {
		int number=1;
		int num1=1;
		for(int j=row-1;j>i;j--) {
			if(num1%2==0) {
				printf(" \t");
				number+=2;
			}
			else
				printf(" \t");
			num1++;
		}
		
		for(int k=1;k<=(num*2)-1;k++) {
		
			if(num1%2==0) {
				printf("%d\t",i*number);
				number+=2;
			}
			else if(num1%2!=0) {
				printf("%d\t",i*2);
			}
			num1++;
		}
		num++;
		printf("\n");
	}
}
