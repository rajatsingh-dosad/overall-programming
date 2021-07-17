

#include<stdio.h>

void main() {

	int a =2;
	
	switch(a) {	

		case 1:                          //2 == 1
			{
			printf("One\n");
			printf("1\n");
			break;
			}
					
		case 2 :			//2 == 2	
			{
			printf("Two\n");
			printf("2\n");
			break;
			}
		case 3 :
			{
			printf("Three\n");
			printf("3\n");
			break;
			}
		case 4 :
			{
			printf("Four\n");
			printf("4\n");
			break;
			}
		case 5 :
			{
			printf("Five\n");
			printf("5\n");
			break;
			}
	}
	printf("Outside Switch\n");
}
