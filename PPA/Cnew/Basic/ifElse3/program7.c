
#include<stdio.h>

void main() {

	int weight=50;
	if(weight<50 && weight >30){			//false
		printf("You are under weight\n");
	}
	if(weight>=50 && weight <= 70){			//true
		printf("you are well maintained\n");	//prints
	}
	if(weight > 70);{				//null statement binded to if
		printf("you are overweight you have to work hard\n");	//prints because not associated to if
	}
}
