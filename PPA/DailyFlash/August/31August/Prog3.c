

#include<stdio.h>

void main()  {

	int num;

	printf("Enter the number: ");
	scanf("%d",&num);

	for(int i=1; i<=num; i++) {
		
		if(i%2!=0) {

			printf("Cube of %d: %d and Square of %d: %d\n",i,i*i*i,i,i*i);
		}
	}
	printf("\n");
}
