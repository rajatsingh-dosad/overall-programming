

#include<stdio.h>
#include<stdbool.h>
void main() {

	bool val=false,var=true;

	if(val); {			//if statement bind to null statement
		printf("True\n");	//Print True as not associated to if statement
	}
	if(var) {			//Condition true
		printf("False\n");	//Print False
	}
}
