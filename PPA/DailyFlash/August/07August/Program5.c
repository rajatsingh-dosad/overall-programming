

#include<stdio.h>

void main() {
	char ch;
	do {	
		int num;
		printf("Enter a number: ");
		scanf("%d",&num);
		
		int rev = 0;
		int store=num;
		while(num!=0) {

			rev = (rev*10)+(num%10);
			num=num/10;
		}
		if(store==rev)	{
			printf("The number is a palindrone\n");

			break;
		}

		else
			printf("%d\n",store);

		printf("Do you wan to continue y/Y: ");
		scanf(" %c",&ch);
	}while(ch=='Y' || ch=='y');
}
	



