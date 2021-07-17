

#include<stdio.h>

void main() {

	int num = 0;

	int i = 1;

	while(i<=20) {

		printf("enter a number: ");
		scanf("%d",&num);

		if(num%4==0 && num%10==0) 
			break;
		else
			printf("num = %d\n",num); 
		
		i++;
	}
	printf("Out of while\n");
}
