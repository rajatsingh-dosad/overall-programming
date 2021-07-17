

#include<stdio.h>

void main() {
	char ch;
	printf("Welcome to burger king.");
	
	do {
		int num;
		printf("Please select from the following\n");
		printf("1.Veg\n2.Non Veg\n");
		scanf("%d",&num);

		switch(num) {

			case 1: {	char choice;
					printf("Veg Blasts\n");
					printf("a. Veggie Tikki Burger\nb. Aloo Tikki Burger\nc. Mushroom Veggie cheese Burger\nd .Peanut Butter Sweet Potato Burger\n");
					scanf(" %c",&choice);

					switch(choice) {

						case 'a':
							printf("Veggie Tikki Burger - Rs 200\n");
							break;
						case 'b':
							printf("Aloo Tikki Burger - Rs 150\n");
							break;
						case 'c':
							printf("Mushroom Veggie cheese Tikki Burger - Rs 200\n");
							break;
						case 'd':
							printf("Peanut Butter Sweet potato Burger - Rs 250\n");
							break;
						default:
							printf("U entered a wrong choice!\n");
							break;
					}



				}
				break;

			case 2: {
					char choice;
					printf("Non Veg Blasts\n");
					printf("a. Chicken Tikki Burger\nb. Chicken cheese  Burger\nc. Chicken leg piece \n");
					scanf(" %c",&choice);

					switch(choice) {

						case 'a':
							printf("Chicken Tikki Burger - Rs 200\n");
							break;
						case 'b':
							printf("Chicken cheese Burger - Rs 150\n");
							break;
						case 'c':
							printf("Chicken leg piece - Rs 200\n");
							break;
						default:
							printf("U entered a wrong choice!\n");
							break;
					}
				}
				break;

			default:
				printf("Service not provided");
				break;
		}
		printf("Do you want to continue y/Y: ");
		scanf(" %c",&ch);
	}while(ch=='y' || ch =='Y');
}

