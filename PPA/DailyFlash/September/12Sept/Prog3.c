

#include<stdio.h>

void main() {

	int arr[7];

	for(int i=0;i<7;i++) {

		scanf("%d",&arr[i]);
	}

	int sum=0;
	double mean;

	for(int i=0;i<7;i++) {

		sum =sum + arr[i];
	}

	mean = sum /  7;

	printf("Mean of array elements is %.2lf\n",mean);
}

