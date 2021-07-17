

#include<stdio.h>

void main() {

	int sum=0,num;
	
	printf("Enter a number: ");
	scanf("%d",&num);


	while(num!=0) {
		
		sum=num%10;
		printf("%d",sum);
		num=num/10;
	}
	printf(" is the reverse of number.\n");

}
		
