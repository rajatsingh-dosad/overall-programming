
#include<stdio.h>

void main() {

	int arr[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

	for(int i=0;i<3;i++) {

		for(int j=0;j<5;j++) {

			printf("%d\n",arr[i][j]);
		}
	}
}
