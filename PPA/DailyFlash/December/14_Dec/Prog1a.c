
#include<stdio.h>

int count(int);

void main() {
	
	int num;

	printf("Enter the number greater than 3 digits: ");
	scanf("%d",&num);

	int cnt = count(num);

	printf("The total digits of number are: %d\n",cnt);
}

