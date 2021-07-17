
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	float farr[n];

	printf("Enter the salary of %d employees: ",n) ;
	for(int i=0;i<n;i++) {

		scanf("%f",&farr[i]);
	}

	float *fptr = farr;
	
	int year;
	printf("Enter the year: ");
	scanf("%d",&year);

	
	int temp,element=0;
	for(int i=0;i<n/2;i++) {
 		temp = farr[i];
		farr[i] = farr[n-i-1];
		farr[n-i-1] = temp;
	}

	element = 2020 - year;

	printf("%d salary is %.2f\n",year,*(fptr+element));
}

	


