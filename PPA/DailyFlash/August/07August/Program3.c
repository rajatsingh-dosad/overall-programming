

#include<stdio.h>

void main() {

	int num;
	printf("Enter a number: ");
	scanf("%d",&num);

	do {
		printf("%d\n",num);
		num--;
	}while(num!=0);
}
