

#include<stdio.h>

void main() {

	int num=546879;

	while(num!=0) {

		switch(num%10) {

			case 1: printf("One ");
				break;
			case 2: printf("Two ");
				break;
			case 3: printf("Three ");
				break;
			case 4: printf("Four ");
				break;
			case 5: printf("Five ");
				break;
			case 6: printf("Six ");
				break;
			case 7: printf("Seven ");
				break;
			case 8: printf("Eight ");
				break;
			case 9: printf("Nine ");
				break;
		}
		num = num / 10;
	}
	printf("\n");
}
		
