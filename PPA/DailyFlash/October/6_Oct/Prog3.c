
#include<stdio.h>

void main() {

	int arr[3][3];

	printf("Enter the elements in arraY:\n");
	for(int i=0;i<3;i++) {

		for(int j=0;j<3;j++) {

			scanf("%d",&arr[i][j]);
		}
	}
	int flag;
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {

			if(i<j) {
				if(arr[i][j]!=0) {
					flag = 1;
					break;
				}
			}
		}
	}

	if(flag==0)
		printf("Matrix is lower triangular\n");
	else
		printf("Matrix is not lower triangular\n");
}



					

		
	



