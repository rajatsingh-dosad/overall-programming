

#include<stdio.h>

void main() {

	int a =2;
	
	switch(a) {	

		case 1:                          //2 == 1
			printf("One\n");
			break;
					
		case 2 :			//2 == 2	
			printf("Two\n");
			break;
		
		case 3 :
			printf("Three\n");
			break;
		
		case 4 :
			printf("Four\n");
			break;
		
		case 5 :
			printf("Five\n");
			break;
		
	}
	printf("Outside Switch\n");
}
