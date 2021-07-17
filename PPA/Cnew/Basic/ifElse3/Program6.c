

#include<stdio.h>

void main() {


	int subVal=15;
	if(subVal++ && subVal--){			
		printf("SubVal : %d\n",subVal);		//15
	}
	if(subVal-- || ++subVal){			//here ++subval will not be checked becoz subVal is true so in || if first is true we dont check second
		printf("SubVal : %d\n",subVal);		//14
	}
	if(subVal > subVal);{				//if statement binded with null statement
		printf("SubVal : %d\n",subVal);		//14
	}
}
