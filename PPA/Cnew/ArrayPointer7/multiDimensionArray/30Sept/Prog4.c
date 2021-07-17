
#include<stdio.h>

void main() {

	int arr[3][5] = {{1,2,3},{6,7,8,9},{11,13}};

	for(int i=0;i<3;i++) {

		for(int j=0;j<5;j++) {

			printf("%d\n",arr[i][j]);
		}
	}
}
