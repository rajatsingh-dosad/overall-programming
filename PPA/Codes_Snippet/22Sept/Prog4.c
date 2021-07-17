
#include<stdio.h>

void main() {

	int size,i;
	scanf("%d",&size);
	int arr[size];

	for(int i=1;i<=size;i++) {

		scanf("%d",&arr[i]);
		printf("%d",arr[i]);
	}
}
