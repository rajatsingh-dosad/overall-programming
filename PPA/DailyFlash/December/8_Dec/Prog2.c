
#include<stdio.h>

struct Bank {

	int accNum;
	char *name;
	float balance;
};

void main() {
	
	struct Bank cst1 = {123,"Rohan",1200.0};
	struct Bank cst2 = {456,"Priyanshu",2000.0};
	struct Bank cst3 = {789,"Shruti",2500.0};
	struct Bank cst4 = {101112,"Riya",1800.0};

	struct Bank cstarr[] = {cst1,cst2,cst3,cst4};

	for(int i=0;i<4;i++) {
		
		if(cstarr[i].balance < 1500) {

			printf("Account number: %d and name: \"%s\" \n",cstarr[i].accNum,cstarr[i].name);
			printf("Your account balance is low\n\n\n");
		}	

	}
	
	printf("Data of all Customers:\n\n");
	for(int i=0;i<4;i++) {
		
		printf("Account number: %d\n",cstarr[i].accNum);
		printf("Name : %s\n",cstarr[i].name);
		printf("Balance : %.2f\n\n",cstarr[i].balance);
	}


}
