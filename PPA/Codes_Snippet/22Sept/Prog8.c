
#include<stdio.h>

void main() {

	int arr[] = {20,25,16,17,22};
	for(int i=0; i<5;i++) {

		printf("%d ",*(i+arr));
	}
}
