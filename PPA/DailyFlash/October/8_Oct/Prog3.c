
#include<stdio.h>

void main() {

	int order;
	printf("Enter the order of square matrix: ");
	scanf("%d",&order);

	int arr[order][order];

	printf("Enter the elements in array: ");
	for(int i=0;i<order;i++) {

		for(int j=0;j<order;j++) {

			scanf("%d",&arr[i][j]);
		}
	}
	
	int flag = 0;
	for(int i=0;i<order;i++) {

		for(int j=0;j<order;j++) {

			if(arr[i][j]!=-arr[j][i]) {
				flag = 1;
				break;
			}
		}
	}

	if(flag==0)
		printf("Matrix is skew symmetric\n");
	else
		printf("Matrix is not skew symmetric\n");
}

