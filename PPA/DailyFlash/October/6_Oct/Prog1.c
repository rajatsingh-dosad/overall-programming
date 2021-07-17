
#include<stdio.h>

void main() {

	int arr[3][3];

	printf("Enter the elements in array:\n");
	for(int i=0;i<3;i++) {

		for(int j=0;j<3;j++) {

			scanf("%d",&arr[i][j]);
		}
	}
	
	int flag = 0;
	for(int i=0;i<3;i++) {

		for(int j=0;j<3;j++) {

			if(i==j && arr[i][j]!=1) {
				flag = 1;
				break;
			}
			if(i!=j && arr[i][j] !=0) {
				flag = 1;
				break;
			}
		}
	}

	if(flag==0)
		printf("Given matrix is identity matrix\n");
	else
		printf("Given matrix is not identity matrix\n");
}


