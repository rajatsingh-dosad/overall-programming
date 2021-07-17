

#include<stdio.h>

void main() {

	int num,sum=0;
	printf("Ente a number: ");
	scanf("%d",&num);

	int dup=num;
	while(num>=1) {

		sum=sum+num;
		num--;
	}
	printf("The sum number upto %d: %d\n",dup,sum);
}

