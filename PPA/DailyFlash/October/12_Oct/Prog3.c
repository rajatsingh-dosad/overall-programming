
#include<stdio.h>

void main() {

	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	char carr[size];
	char* cptr[size];
	printf("Enter the character in the array: ");
	for(int i=0;i<size;i++) {
		scanf(" %c",&carr[i]);
		cptr[i] = &carr[i];
	}

	for(int i=0;i<size;i++) {

		if(*cptr[i]>='A' && *cptr[i]<='Z')
			printf("%c ",*cptr[i]+32);
		if(*cptr[i]>='a' && *cptr[i]<='z')
			printf("%c ",*cptr[i]-32);
	}
	printf("\n");
}
