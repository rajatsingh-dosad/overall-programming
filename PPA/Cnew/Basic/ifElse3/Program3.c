

#include<stdio.h>

void main() {

	int ilc=15,olc=25;

	if(olc>ilc) {
		printf("olc:%d\n",olc);		//olc=25 as condition true 
	}

	if(ilc<olc); {				//here condition is bind to a null statement
		printf("ilc:%d\n",ilc);		//ilc=15 here this statement is not associated to if statement 

	}

		printf("olc:%d\n",olc);		//olc=25
		printf("ilc:%d\n",ilc);		//ilc=15
}
		
