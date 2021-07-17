

#include<stdio.h>

void main() {
	int n;
	int limit;
	printf("Enter a number:\n");		//We take a number from user
	scanf("%d",&n);

	printf("Enter the limit:\n");		//We then take the limit
	scanf("%d",&limit);

	for(int i=n;i<=limit;i+=n) {	//We start the number from "n" and end at the "limit" given by user and we increment the number by the number 						//itself i.e "n"

		printf("%d, ",i);	//print the number
	}
	printf("\n");
}

