
#include<stdio.h>
int sum = 0;

void passArrEle(int *x) {

	sum = sum + *x;
}
void main() {

	int arr[] = {10,20,30,40,50};
	
	for(int i=0;i<5;i++) {
		passArrEle(&arr[i]);
	}

	printf("%d\n",sum);
}
