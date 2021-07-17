
#include<stdio.h>

int row,col;
int Diagonal(int arr[row][col]) {
	
	int sum = 0;
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			if(i==j) {
				int fac = 1;
				int num = *(*(arr+i)+j);
				while( num > 0) {

					fac = fac * num;
					num--;
				}
				sum = sum + fac;
			}
		}
	}
	return sum;
}

void main() {

	printf("Enter the number of rows and columns of the array: ");
	scanf("%d %d",&row,&col);

	int arr[row][col];
	int sum = 0;

	printf("Enter the elements of 2d array: ");
	for(int i=0;i<row;i++) {

		for(int j=0;j<col;j++) {

			scanf("%d",&arr[i][j]);
		}
	}

	sum = Diagonal(arr);

	printf("Sum = %d\n",sum);
}
