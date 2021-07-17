
#include<stdio.h>

void main() {

	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	char carr[size];
	void *ptr = carr;
	printf("Enter the character in the array: ");
	for(int i=0;i<size;i++) {

		scanf(" %c",&carr[i]);
	}
	
	printf("Entered Array: ");
	for(int i=0;i<size;i++) {

		printf("%c ",*(char *)ptr);
		ptr++;
	}
	printf("\n");

	for(int i=0;i<size;i++) {

		if(carr[i]>=48 && carr[i]<=57)
			printf("Digit\n");
		if((carr[i]>=65 && carr[i]<=90) || (carr[i]>=97 && carr[i]<=122))
			printf("Character\n");
	}

	
}
