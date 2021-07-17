

#include<stdio.h>

void main() {

	char agree = 'y';
	do {	
		int ch = 0;
		printf("Welcome\n");
	       	printf("1:Shopping\n2:PVR\n3:PlayStation\n4:Food Court\n");	
		
		printf("Enter your choice: ");
		scanf("%d",&ch);		
		switch(ch) {

			case 1: 
				printf("Wrogn, Lp\n");
				break;
			case 2:
				printf("Panipat\n");
				break;
			case 3:
				printf("Cricket\n");
				break;
			case 4:
				printf("Biryani\n");
				break;
			default:
				printf("Wrong choice\n");
				break;
		}

		printf("Do you want to continue y/Y: ");
		scanf(" %c", &agree);
	}while(agree=='y' || agree=='Y');
}
