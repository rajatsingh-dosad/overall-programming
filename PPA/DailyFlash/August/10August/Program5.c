/*	Program 5. Write a Program To Print Following Pattern. {Note: Take Rows Input From
	User.}

Input: Enter Number of Rows: 4
Output:
0
1 1
2 3 5
8 13 21 34

*/


#include<stdio.h>

void main() {

	int prevNo=0;
	int currNo=1;
	int nextNo;
	
	int row;
	printf("Enter the number of rows: ");
	scanf("%d",&row);

	for(int i=1;i<=row;i++) {

		for(int j=1;j<=i;j++) {

		printf("%d ",prevNo);
		nextNo=prevNo+currNo;
		prevNo=currNo;
		currNo=nextNo;
		}
	printf("\n");
	}
}


