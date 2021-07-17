/*	Program 6. Write a Program To Print Following Pattern. {Note: Take rows input from
	user}

Input: Enter Number of Rows: 5
Output:
0 1 4 9 16
  2 6 12 20
    8 15 24
      18 28
         32

*/


#include<stdio.h>

void main() {

	int row;
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	
	for(int i=0;i<row;i++) {

		for(int space=0;space<i;space++) {

			printf(" \t");
		}
		int num1=i;
		int num2=i*2;

		for(int j=row;j>i;j--) {
			
			printf("%d\t",num1*num2);
			num1++;
			num2++;
		}
		printf("\n");
	}
}

