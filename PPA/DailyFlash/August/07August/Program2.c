

#include<stdio.h>

void main() {

	char choice ='y';

	do {
		int num;
		int count=0;	
		printf("Enter a number: ");
		scanf("%d",&num);

		for(int i=1;i<=num;i++) {
			if(num%i==0)
				count++;
		}
		if(count==2) {
			printf("U entered a prime number.\n");
			break;
		}
		else 
			printf("Number is %d \n",num);
		
		printf("Do you want to continue y/Y : ");
		scanf(" %c",&choice);

	}while(choice=='y' || choice =='Y');
}

		

		
