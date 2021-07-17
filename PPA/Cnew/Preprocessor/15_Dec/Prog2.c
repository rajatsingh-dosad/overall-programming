
#include<stdio.h>

#define macVar 25
#define PI 3.142
#define arrVal 10,\
		20,\
		30

void main() {

	printf("%d\n",macVar);
	printf("%f\n",PI);

	int arr[] ={arrVal};

	for(int i=0;i<3;i++) {

		printf("%d\n",arr[i]);
	}
}
