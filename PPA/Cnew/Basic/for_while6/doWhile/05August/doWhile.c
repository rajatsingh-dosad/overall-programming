

#include<stdio.h>

void main() {

	int i = 1;

	do {
		if(i%2==0)
			printf("%d is even\n",i);
		i++;
	}while(i<=20);

	printf("Out of while\n");
}
