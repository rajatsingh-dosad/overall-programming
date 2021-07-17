

#include<stdio.h>

void main() {

	int num;
	char ch='y';
	do {
		printf("Enter the number: ");
		scanf("%d",&num);
		int rev = 0;
		int var=num;
		while(num!=0) {

			rev=(rev *10) + (num % 10);
			num=num/10;
		}
		printf("Reverse of %d is %d\n",var,rev);

		printf("Do you want to enter other number? :");
		scanf(" %c",&ch);

	}while(ch=='y' || ch=='Y');
}
