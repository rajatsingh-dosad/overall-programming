

#include<stdio.h>

void main(void) {
	int aNum = 0;
	char aChar;
	if(!aNum){				//true
		printf("Inside First If...\n");	//prints	
		aNum += 20;			
		aChar = "T";			//Warning: assignment makes integer from pointer without a cast 
	}
	if(aNum % 4 != 0){			//false
		printf("Inside Second If...\n");
		aNum -= 20;	
		aChar = "F";			 //Warning: assignment makes integer from pointer without a cast 

	}
	if(aNum == 0) {				//false
		printf("Inside Third If...\n");
		aChar = "T";			 //Warning: assignment makes integer from pointer without a cast 

	}
	printf("After all IF, Values Are..., %d & %c\n", aNum, aChar);	//aNum=20
}


