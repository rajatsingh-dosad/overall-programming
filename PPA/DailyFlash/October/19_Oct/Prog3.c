
#include<stdio.h>

void main() {

	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	int arr[10];

	for(int i=0;i<10;i++) {

		arr[i] = num * (i+1);
	}

	int (*ptr)[10] = &arr;
	printf("\nOUTPUT:\n");
	for(int i=0;i<10;i++) {

		printf("%d ",*(*(ptr+0)+i));
	}
	printf("\n");
}
